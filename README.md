      __              __         ___          ___                      
     /\ \            /\ \__    /'___\  __    /\_ \                     
     \_\ \     ___   \ \ ,_\  /\ \__/ /\_\   \//\ \       __     ____  
     /'_` \   / __`\  \ \ \/  \ \ ,__\\/\ \    \ \ \    /'__`\  /',__\ 
    /\ \L\ \ /\ \L\ \  \ \ \_  \ \ \_/ \ \ \    \_\ \_ /\  __/ /\__, `\
    \ \___,_\\ \____/   \ \__\  \ \_\   \ \_\   /\____\\ \____\\/\____/
     \/__,_ / \/___/     \/__/   \/_/    \/_/   \/____/ \/____/ \/___/ 
                                                                   

# Installation
I manage my packages with [GNU Stow](https://www.gnu.org/software/stow/), it's available on most linux distributions.
- `$ sudo pacman -S stow`

To use it, navigate to your home directory and create symlinks using stow.
- `$ cd ~`
- `$ git clone https://github.com/angelocarly/dotfiles.git`
- `$ cd dotfiles`
- `$ stow {folder}`

**Note:** Stow only creates symlinks if the file doesn't already exist. You must remove/backup the existing config before using stow.

## Packages 
These dotfiles rely on the following packages:
* i3-gaps - Window manager, don't forget to add `exec i3` in xinitrc
* polybar - Toolbar
* siji font - Font used in polybar config
* compton - Compositor
* pywal - Generate global colors
* feh - Image displayer for background
* light - Screen brightness manager
* dunst - Notification manager
* pulseaudio/pavucontrol - Audio manager
* scrot - Screenshot tool
* kalu - Arch update notifier
