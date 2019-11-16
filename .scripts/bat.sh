 
battery_level=$(acpi -b | sed -n 's/.*\ \([[:digit:]]\{1,3\}\)\%.*/\1/;p')
battery_state=$(acpi -b | awk '{print $3}' | tr -d ",")
battery_remaining=$(acpi -b | sed -n '/Discharging/{s/^.*\ \([[:digit:]]\{2\}\)\:\([[:digit:]]\{2\}\).*/\1h \2min/;p}')
backlight_cmd=$(which light)
_battery_threshold_level="35"
_battery_critical_level="30"
_battery_suspend_level="10"

if [ ! -f "/tmp/.battery" ]; then
    echo "${battery_level}" > /tmp/.battery
    echo "${battery_state}" >> /tmp/.battery
    exit
fi

previous_battery_level=$(cat /tmp/.battery | head -n 1)
previous_battery_state=$(cat /tmp/.battery | tail -n 1)
echo "${battery_level}" > /tmp/.battery
echo "${battery_state}" >> /tmp/.battery

checkBatteryLevel() {
    if [ ${battery_state} != "Discharging" ] || [ "${battery_level}" == "${previous_battery_level}" ]; then
        exit
    fi

    if [ ${battery_level} -le ${_battery_suspend_level} ]; then
# I don't use sudo for
        systemctl suspend
    elif [ ${battery_level} -le ${_battery_critical_level} ]; then
        notify-send "Low Battery" "Your computer will suspend soon unless plugged into a power outlet." -u critical
	${backlight_cmd} -S 50
    elif [ ${battery_level} -le ${_battery_threshold_level} ]; then
        notify-send "Low Battery" "${battery_level}% (${battery_remaining}) of battery remaining." -u normal
	${backlight_cmd} -S 75
    fi
}

checkBatteryStateChange() {
    if [ "${battery_state}" != "Discharging" ] && [ "${previous_battery_state}" == "Discharging" ]; then
        notify-send "Charging" "Battery is now plugged in." -u low
	${backlight_cmd} -S 100

    fi

    if [ "${battery_state}" == "Discharging" ] && [ "${previous_battery_state}" != "Discharging" ]; then
        notify-send "Power Unplugged" "Your computer has been disconnected from power." -u low
    fi
}

checkBatteryStateChange
checkBatteryLevel
