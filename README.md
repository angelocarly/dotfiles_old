![screenshot](./.github/screenshot.png?raw=true)

      __              __         ___         ___                      
     /\ \            /\ \__    /'___\  __   /\_ \                     
     \_\ \     ___   \ \ ,_\  /\ \__/ /\_\  \//\ \       __     ____  
     /'_` \   / __`\  \ \ \/  \ \ ,__\\/\ \   \ \ \    /'__`\  /',__\ 
    /\ \L\ \ /\ \L\ \  \ \ \_  \ \ \_/ \ \ \   \_\ \_ /\  __/ /\__, `\
    \ \___,_\\ \____/   \ \__\  \ \_\   \ \_\  /\____\\ \____\\/\____/
     \/__,_ / \/___/     \/__/   \/_/    \/_/  \/____/ \/____/ \/___/ 
                                                                   

## Installation
I manage my packages with [GNU Stow](https://www.gnu.org/software/stow/), it's available on most linux distributions.
- `$ sudo pacman -S stow`

To use it, navigate to your home directory and create symlinks using stow.
- `$ cd ~`
- `$ git clone https://github.com/angelocarly/dotfiles.git`
- `$ cd dotfiles`
- `$ stow {folder}`

If you wish to link all the folders, run `install.sh`

**Note:** Stow only creates symlinks if the file doesn't already exist. You must remove/backup the existing config before using stow.

## Overview
**Window manager and terminal**
* [i3-gaps](https://github.com/Airblader/i3) - *Tiling window manager*
* [kitty](https://sw.kovidgoyal.net/kitty/) - *Terminal*
* [compton](https://github.com/chjj/compton) - *Compositor*
* [rofi](https://github.com/davatorium/rofi) - *Application launcher*
* [polybar](https://github.com/polybar/polybar) - *Toolbar*

**Colors and fonts**
* [pywal](https://github.com/dylanaraps/pywal) - *Dynamic color scheme generator*
* [siji](https://github.com/stark/siji) - *Polybar status icons font*
* [tamzen](https://github.com/sunaku/tamzen-font) - *Polybar text font*
* [Terminus (TTF)](http://terminus-font.sourceforge.net) - *Terminal font*

**Shell**
* [zsh](https://www.zsh.org) - *Shell*
* [oh-my-zsh](https://github.com/robbyrussell/oh-my-zsh) - *zsh extensions*

**Tools**
* [feh](https://github.com/derf/feh) - *Image displayer for background*
* [light](https://github.com/haikarainen/light) - *Screen brightness manager*
* [dunst](https://github.com/dunst-project/dunst) - *Notification manager*
* [pulseaudio](https://github.com/pulseaudio/pulseaudio) - *Audio manager*
* [maim](https://github.com/naelstrof/maim) - *Screenshot tool*
* [kalu](https://github.com/jjk-jacky/kalu) - *Arch update notifier*

**Applications**
* [ranger](https://github.com/ranger/ranger) - *File browser*
* [qutebrowser](https://github.com/qutebrowser/qutebrowser) - *Browser*
* [neovim](https://github.com/neovim/neovim) - *Text editor*
* [ncdu](https://dev.yorhel.nl/ncdu) - *Disk usage analyser*
