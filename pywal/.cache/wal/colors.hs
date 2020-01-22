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
background="#1e1e1e"
foreground="#ffffff"
cursor="#eeaa88"

-- Colors
color0="#1e1e1e"
color1="#8f423c"
color2="#bbbb88"
color3="#f9d25b"
color4="#e0ba69"
color5="#709289"
color6="#d13516"
color7="#efe2e0"
color8="#8da691"
color9="#eeaa88"
color10="#ccc68d"
color11="#eedd99"
color12="#c9b957"
color13="#ffcbab"
color14="#c25431"
color15="#f9f1ed"
