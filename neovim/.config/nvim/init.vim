set fenc=utf-8
" Specify a directory for plugins For Neovim: stdpath('data') . '/plugged'
" - Avoid using standard Vim directory names like 'plugin'
call plug#begin('~/.vim/plugged')

Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
let g:airline_theme='wal'

Plug 'tpope/vim-surround'
Plug 'dylanaraps/wal.vim'
Plug 'justinmk/vim-sneak'
" coc
" Plug 'neoclide/coc.nvim', {'branch': 'release'} " Also install coc-clangd
" try
    " nmap <silent> [c :call CocAction('diagnosticNext')<cr>
    " nmap <silent> ]c :call CocAction('diagnosticPrevious')<cr>
" endtry
" nn <silent><buffer> <C-l> :call CocLocations('ccls','$ccls/navigate',{'direction':'D'})<cr>
" nn <silent><buffer> <C-k> :call CocLocations('ccls','$ccls/navigate',{'direction':'L'})<cr>
" nn <silent><buffer> <C-j> :call CocLocations('ccls','$ccls/navigate',{'direction':'R'})<cr>
" nn <silent><buffer> <C-h> :call CocLocations('ccls','$ccls/navigate',{'direction':'U'})<cr>
Plug 'prabirshrestha/async.vim'
Plug 'neovim/nvim-lspconfig'
"Plug 'deoplete-plugins/deoplete-clang'
Plug 'prabirshrestha/vim-lsp'
Plug 'prabirshrestha/asyncomplete-lsp.vim'
Plug 'prabirshrestha/asyncomplete.vim'
Plug 'mattn/vim-lsp-settings'
Plug 'keremc/asyncomplete-clang.vim'
inoremap <expr> <Tab> pumvisible() ? "\<C-n>" : "\<Tab>"
inoremap <expr> <S-Tab> pumvisible() ? "\<C-p>" : "\<S-Tab>"
inoremap <expr> <cr>    pumvisible() ? "\<C-y>" : "\<cr>"
imap <c-space> <Plug>(asyncomplete_force_refresh)

Plug 'preservim/nerdtree'
Plug 'flw-cn/vim-nerdtree-l-open-h-close'
Plug 'rafi/awesome-vim-colorschemes'
Plug 'racer-rust/vim-racer'
Plug 'raimondi/delimitmate'
Plug 'liuchengxu/vim-clap'
Plug 'lervag/vimtex'
Plug 'eagletmt/ghcmod-vim' " Reveal types as you code
Plug 'Shougo/vimproc'
Plug 'liuchengxu/vista.vim' " LSP browser
Plug 'machakann/vim-highlightedyank'
" Treesitter
Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'} " Highlighting for types
"set foldmethod=expr
"set foldexpr=nvim_treesitter#foldexpr()

" Plug 'neovim/nvim-lspconfig'

" rust
Plug 'rust-lang/rust.vim'
let g:vimtex_compiler_progname = 'nvr'

" Initialize plugin system
call plug#end()

" General config
inoremap kj <Esc>  

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
" colorscheme wal
colorscheme happy_hacking
syntax on
set t_Co=256

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

"autocmd User asyncomplete_setup call asyncomplete#register_source(
"    \ asyncomplete#sources#clang#get_source_options())
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
