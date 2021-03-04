" NVIM configuration
" Angelo Carly

" Plugins {{{
" Specify a directory for plugins For Neovim: stdpath('data') . '/plugged'
" - Avoid using standard Vim directory names like 'plugin'
call plug#begin('~/.vim/plugged')

Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'tpope/vim-surround'
Plug 'dylanaraps/wal.vim'
Plug 'justinmk/vim-sneak'
Plug 'prabirshrestha/async.vim'
Plug 'neovim/nvim-lspconfig'
Plug 'prabirshrestha/vim-lsp'
Plug 'prabirshrestha/asyncomplete-lsp.vim'
Plug 'prabirshrestha/asyncomplete.vim'
Plug 'mattn/vim-lsp-settings'
Plug 'keremc/asyncomplete-clang.vim'
Plug 'preservim/nerdtree'
Plug 'flw-cn/vim-nerdtree-l-open-h-close'
Plug 'rafi/awesome-vim-colorschemes'
Plug 'raimondi/delimitmate'
Plug 'liuchengxu/vim-clap'
Plug 'eagletmt/ghcmod-vim' " Reveal types as you code
Plug 'Shougo/vimproc'
Plug 'liuchengxu/vista.vim' " LSP browser
Plug 'machakann/vim-highlightedyank'
Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'} " Highlighting for types
Plug 'lervag/vimtex'
let g:vimtex_compiler_progname = 'nvr'

call plug#end()
" }}}

" Colors and theming {{{
let g:airline_theme='wal'
colorscheme happy_hacking
set t_Co=256
syntax on
" }}}

" Editor settings {{{
set foldmethod=marker
set foldmarker={{{,}}}
set mouse=a
set number
set relativenumber
set hlsearch
set scrolloff=5
set tabstop=4
set softtabstop=0
set expandtab
set smarttab
set shiftwidth=4
set ignorecase
set hidden
set list
set listchars=tab:\>\ ,trail:-

" }}}

" Keybinds {{{
inoremap kj <Esc>  
map <C-n> :NERDTreeToggle<CR>

" Tab completion
inoremap <silent><expr> <TAB>
      \ pumvisible() ? "\<C-n>" :
      \ <SID>check_back_space() ? "\<TAB>" :
      \ coc#refresh()
inoremap <expr><S-TAB> pumvisible() ? "\<C-p>" : "\<C-h>"

" . autocompletion ?
function! s:check_back_space() abort
  let col = col('.') - 1
  return !col || getline('.')[col - 1]  =~# '\s'
endfunction

" Asyncomplete binding
inoremap <expr> <Tab> pumvisible() ? "\<C-n>" : "\<Tab>"
inoremap <expr> <S-Tab> pumvisible() ? "\<C-p>" : "\<S-Tab>"
inoremap <expr> <cr>    pumvisible() ? "\<C-y>" : "\<cr>"
imap <c-space> <Plug>(asyncomplete_force_refresh)

" }}}

" LUA configuration {{{
" Treesitter - highlighting and folding
lua <<EOF
require'nvim-treesitter.configs'.setup {
  ensure_installed = "maintained", -- one of "all", "maintained" (parsers with maintainers), or a list of languages
  highlight = {
    enable = true,              -- false will disable the whole extension
    disable = { "c", "rust" },  -- list of language that will be disabled
  },
}
require'lspconfig'.clangd.setup{}
EOF
" }}}
