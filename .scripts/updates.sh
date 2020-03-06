yay -Syy > /dev/null 2>&1
upd=$(yay -Qu)

if [ ! -z "${upd}" ]
then
	notify-send -u normal "Updates available" "$(echo "$upd" | cut -d' ' -f1,3,4)"
fi

