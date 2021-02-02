source ~/.cache/wal/colors-tty.sh
#wal -R -q
XDG_CONFIG_HOME="$HOME/.config"
export XDG_CONFIG_HOME
export PATH="$HOME/Scripts:$HOME/.cargo/bin:/home/magnias/.local/bin:$PATH"
export _JAVA_AWT_WM_NONREPARENTING=1
export TERM="xterm-kitty"

# setxkbmap -model pc104 -layout us,us -variant colemak, -option grp:shifts_toggle

# auto start x
if systemctl -q is-active graphical.target && [[ ! $DISPLAY && $XDG_VTNR -eq 1 ]]; then
  exec startx > /tmp/startx 2>&1
fi

