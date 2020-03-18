pacman -Syy > /dev/null 2>&1
upd=$(pacman -Qu)

su magnias -c "notify-send -u normal 'TESTSTEST'" 
if [ ! -z "${upd}" ]
then
	mesg="$(echo "$upd" | cut -d' ' -f1,3,4)"
    su magnias -c "notify-send -u normal 'Updates available' 'mesg'" 
fi

