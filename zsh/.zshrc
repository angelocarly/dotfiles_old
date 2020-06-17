export EDITOR="nvim"
export ZSH="/home/magnias/.oh-my-zsh"
export PYTHONPATH=$PYTHONPATH:/home/magnias/.config/dev/python/python-files
export KALI=root@192.168.122.30

ZSH_THEME="blinks-mag"

# Aliases
alias sht="sudo -k shutdown -h now"
alias rbt="sudo -k reboot now"
alias vim="nvim"
alias svim="sudoedit"
alias p="python"
alias ssh="kitty +kitten ssh"
alias imcat="kitty +kitten icat"
alias isw="sudo isw"
alias clk="tty-clock -t -c -C 3 -B"
alias dragon="dragon-drag-and-drop"
alias o="xdg-open"


# Plugins
plugins=(
	git
	fzf
	colored-man-pages
)

# Source
source $ZSH/oh-my-zsh.sh
