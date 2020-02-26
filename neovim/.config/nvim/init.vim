" Specify a directory for plugins For Neovim: stdpath('data') . '/plugged'
" - Avoid using standard Vim directory names like 'plugin'
call plug#begin('~/.vim/plugged')

Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
let g:airline_theme='wal'

Plug 'tpope/vim-surround'
Plug 'dylanaraps/wal.vim'
Plug 'justinmk/vim-sneak'
Plug 'neoclide/coc.nvim', {'branch': 'release'}
Plug 'preservim/nerdtree'
Plug 'flw-cn/vim-nerdtree-l-open-h-close'
Plug 'racer-rust/vim-racer'
Plug 'raimondi/delimitmate'
Plug 'liuchengxu/vim-clap'

" rust
Plug 'rust-lang/rust.vim'

" Initialize plugin system
call plug#end()

inoremap kj <Esc>  

set number
set relativenumber
set hlsearch
set scrolloff=5
set tabstop=4
set shiftwidth=4
colorscheme wal

syntax on

" Nerdtree shortcut
map <C-n> :NERDTreeToggle<CR>

" Tab completion
inoremap <silent><expr> <TAB>
      \ pumvisible() ? "\<C-n>" :
      \ <SID>check_back_space() ? "\<TAB>" :
      \ coc#refresh()
inoremap <expr><S-TAB> pumvisible() ? "\<C-p>" : "\<C-h>"

function! s:check_back_space() abort
  let col = col('.') - 1
  return !col || getline('.')[col - 1]  =~# '\s'
endfunction

