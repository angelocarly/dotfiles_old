export EDITOR="nvim"
export ZSH="/home/magnias/.oh-my-zsh"

ZSH_THEME="blinks-mag"

# Aliases
alias sht="sudo -k shutdown -h now"
alias rbt="sudo -k reboot now"
alias wttr="curl https://wttr.in/ghent"
alias vim="nvim"
alias svim="sudoedit"
alias p="ipython"
#alias ssh="try kitty +kitten ssh"
alias ssh="kitty +kitten ssh"
alias imcat="kitty +kitten icat"
alias isw="sudo isw"
alias clk="tty-clock -t -c -C 3 -B"
alias dragon="dragon-drag-and-drop"
alias o="xdg-open"
alias rep="until !!; do sleep 5 ; done"
alias nmap="grc sudo nmap"
alias cat=bat

# Plugins
plugins=(
	docker
	git
	fzf
	colored-man-pages
#zsh-syntax-highlighting
)
eval $(thefuck --alias)
fpath+=($ZSH/plugins/docker)

# Autojump
[[ -s /home/magnias/.autojump/etc/profile.d/autojump.sh ]] && source /home/magnias/.autojump/etc/profile.d/autojump.sh
autoload -U compinit && compinit -u

export ARCHFLAGS="-arch x86_64"

# Source
source $ZSH/oh-my-zsh.sh


alias ls="exa"
alias ll="exa -l"
alias l="exa -la"
