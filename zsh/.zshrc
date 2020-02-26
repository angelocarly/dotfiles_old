export EDITOR="nvim"
export ZSH="/home/magnias/.oh-my-zsh"
export PYTHONPATH=$PYTHONPATH:/home/magnias/.config/dev/python/python-files
export BP="/home/magnias/Documents/Bachelorproef-HoGent/bachproef"

ZSH_THEME="blinks-mag"

# Aliases
alias sht="sudo -k shutdown -h now"
alias rbt="sudo -k reboot now"
alias pls="sudo !!"
alias wttr="curl https://wttr.in/ghent"
alias vim="nvim"
alias svim="sudoedit"
alias p="python"
alias sshmag="kitty +kitten ssh pi@server.magnias.be -p 2202"
alias ssh="kitty +kitten ssh"
alias panel="kitty +kitten panel"
alias icat="kitty +kitten icat"
alias isw="sudo isw"
alias clk="tty-clock -t -c -C 3 -B"
alias mountefi="sudo mount /dev/nvme0n1p1 /efi"
alias dragon="dragon-drag-and-drop"
alias azerty="loadkeys be-latin1"


# Plugins
plugins=(
	git
	fzf
	colored-man-pages
	docker
	zsh-syntax-highlighting
)
eval $(thefuck --alias)

# Autojump
[[ -s /home/magnias/.autojump/etc/profile.d/autojump.sh ]] && source /home/magnias/.autojump/etc/profile.d/autojump.sh

autoload -U compinit && compinit -u

export ARCHFLAGS="-arch x86_64"

# Source
source $ZSH/oh-my-zsh.sh


alias ls="exa"
alias ll="exa -l"
alias l="exa -la"
