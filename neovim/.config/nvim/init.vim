" Specify a directory for plugins
" - For Neovim: stdpath('data') . '/plugged'
" - Avoid using standard Vim directory names like 'plugin'
call plug#begin('~/.vim/plugged')

Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
let g:airline_theme='base16_adwaita'

Plug 'tpope/vim-surround'

" Initialize plugin system
call plug#end()

inoremap kj <Esc>  

set number
set relativenumber
set hlsearch
set scrolloff=5
set tabstop=4

syntax on
