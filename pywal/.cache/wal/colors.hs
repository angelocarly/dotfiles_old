--Place this file in your .xmonad/lib directory and import module Colors into .xmonad/xmonad.hs config
--The easy way is to create a soft link from this file to the file in .xmonad/lib using ln -s
--Then recompile and restart xmonad.

module Colors
    ( wallpaper
    , background, foreground, cursor
    , color0, color1, color2, color3, color4, color5, color6, color7
    , color8, color9, color10, color11, color12, color13, color14, color15
    ) where

-- Shell variables
-- Generated by 'wal'
wallpaper="None"

-- Special
background="#000000"
foreground="#c1c1c1"
cursor="#c1c1c1"

-- Colors
color0="#000000"
color1="#5f8787"
color2="#dd9999"
color3="#a06666"
color4="#888888"
color5="#999999"
color6="#aaaaaa"
color7="#c1c1c1"
color8="#333333"
color9="#5f8787"
color10="#dd9999"
color11="#a06666"
color12="#888888"
color13="#999999"
color14="#aaaaaa"
color15="#c1c1c1"