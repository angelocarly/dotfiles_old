call plug#begin('~/.vim/plugged')

" Language server
Plug 'prabirshrestha/async.vim'				" Allow async in vim
"Plug 'mattn/vim-lsp-settings'				
Plug 'prabirshrestha/vim-lsp'
Plug 'neovim/nvim-lspconfig'				" Quickly setup lsp with lua
Plug 'nvim-lua/completion-nvim'
Plug 'prabirshrestha/asyncomplete.vim'
Plug 'prabirshrestha/asyncomplete-lsp.vim'
Plug 'keremc/asyncomplete-clang.vim'
Plug 'airblade/vim-gitgutter'

" Other Languages
Plug 'neovimhaskell/haskell-vim'
Plug 'lervag/vimtex'
Plug 'tikhomirov/vim-glsl'

" Navigation
Plug 'preservim/nerdtree'
Plug 'flw-cn/vim-nerdtree-l-open-h-close'
"Plug 'liuchengxu/vista.vim' 				" LSP browser
Plug 'junegunn/fzf', { 'do': { -> fzf#install() } }
Plug 'junegunn/fzf.vim'
Plug 'airblade/vim-rooter'					" Make fzf search through entire git project
" Editor
Plug 'justinmk/vim-sneak' 					" Jump quickly to a word
Plug 'tpope/vim-surround' 					" Auto surround apotrophes
Plug 'raimondi/delimitmate' 				" Auto close brackets
Plug 'machakann/vim-highlightedyank'		" Mark the region you yanked
Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'} " Highlighting for lots of languages

" Colors and design
Plug 'vim-airline/vim-airline' 				" Clean statusbar
Plug 'vim-airline/vim-airline-themes'
Plug 'dylanaraps/wal.vim'
Plug 'rafi/awesome-vim-colorschemes'
Plug 'theniceboy/nvim-deus'
let g:vimtex_compiler_progname = 'nvr'
call plug#end()

lua << EOF

-- require'lspconfig'.python.setup {
--  flags = {
--    debounce_text_changes = 500,
--  }
-- }

require'nvim-treesitter.configs'.setup {
  -- A list of parser names, or "all"
  ensure_installed = { "c", "lua", "rust" },

  -- Install parsers synchronously (only applied to `ensure_installed`)
  sync_install = false,

  -- List of parsers to ignore installing (for "all")
  ignore_install = { "javascript" },

  highlight = {
    -- `false` will disable the whole extension
    enable = true,

    -- NOTE: these are the names of the parsers and not the filetype. (for example if you want to
    -- disable highlighting for the `tex` filetype, you need to include `latex` in this list as this is
    -- the name of the parser)
    -- list of language that will be disabled
    -- disable = { "c", "rust" },

    -- Setting this to true will run `:h syntax` and tree-sitter at the same time.
    -- Set this to `true` if you depend on 'syntax' being enabled (like for indentation).
    -- Using this option may slow down your editor, and you may see some duplicate highlights.
    -- Instead of true it can also be a list of languages
    additional_vim_regex_highlighting = false,
  },
}
EOF
