
" Use the marker method of folding. : zo, zc && zR, zM {{{
augroup filetype_vim
    autocmd!
    autocmd FileType vim setlocal foldmethod=marker
augroup END
"}}}

""" General editor settings ========================================== {{{
set clipboard^=unnamed,unnamedplus
set encoding=utf8
set modifiable
set nocompatible
set shiftwidth=4
set tabstop=4
set expandtab
set nobackup
syntax on
filetype indent on
filetype off

"""Related to search
set incsearch
set ignorecase
set smartcase
set hlsearch
"set showmatch

set wildmenu
set wildmode=list:longest
set wildignore=*.docx,*.jpg,*.png,*.gif,*.pdf,*.pyc,*.exe,*.flv,*.img,*.xlsx
set scrolloff=20
set showcmd

set autoindent
set smartindent
set cindent
set ruler

set shellslash
set number
set relativenumber
set cino+=L0 
set belloff=all
setlocal indentkeys-=:
" }}}

" Plugin setup ===================================================={{{
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
Plugin 'VundleVim/Vundle.vim'
Plugin 'preservim/nerdtree'
"Plugin 'lervag/vimtex'
"Plugin 'wondol2/vim-cpp-enhanced-highlight'
"Plugin 'jaxbot/semantic-highlight.vim'
Plugin 'bfrg/vim-cpp-modern'
Plugin 'vim-airline/vim-airline'
Plugin 'tpope/vim-commentary'
Plugin 'wondol2/jellybeans.vim'
call vundle#end()
filetype plugin indent on
"}}}

" Theme Setting {{{
set t_Co=256
"set t_ut=
set background=dark
colorscheme jellybeans
let g:jellybeans_use_gui_italics = 0
"}}}

set shortmess=a

""" Keybindings for { completion, jk for escape, ctrl-a to select all
inoremap {<CR>  {<CR>}<Esc>O
inoremap {}     {}
" imap jk         <Esc>
map <C-a> <esc>ggVG<CR>

vnoremap <C-x> :!termux-clipboard-set <CR>
vnoremap <C-c> :w !termux-clipboard-set<CR><CR>
inoremap <C-v> <ESC>:r !termux-clipboard-get <CR>
noremap <C-v> :r !termux-clipboard-get <CR>

"Append template to new C++ files
autocmd BufNewFile *.cpp 0r /root/ps/scripts/template.cpp
noremap <F1> <ESC> :NERDTreeToggle <CR>
inoremap <F1> <ESC> :NERDTreeToggle <CR>
noremap <F10> <ESC> :wq! <CR>
inoremap <F10> <ESC> :wq! <CR>

""" Compile and run
augroup filetype_cpp
    autocmd!
"    autocmd filetype cpp highlight Normal ctermfg=141 "105 141
"    autocmd filetype cpp highlight cppSpecialCharacters ctermfg=251

    autocmd filetype cpp noremap <F5> <ESC> :w <CR> :!g++ -I/root/ps/scripts -lm -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %:r.out <CR>
    autocmd filetype cpp inoremap <F5> <ESC> :w <CR> :!g++ -I/root/ps/scripts -lm -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %:r.out <CR>
    autocmd filetype cpp noremap <F9> <ESC> :w <CR> :!g++ -I/root/ps/scripts -lm -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %:r.out % && ./%:r.out <CR> :!rm -f %:r.out <CR>
    autocmd filetype cpp noremap <F9> <ESC> :w <CR> :!g++ -I/root/ps/scripts -lm -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %:r.out % && ./%:r.out <CR> :!rm -f %:r.out <CR>

    autocmd filetype cpp setlocal commentstring=//\ %s
augroup END
" fsanitize=address -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %< % && ./%< <CR>
" autocmd filetype cpp nnoremap <F9> :w <bar> !build.sh %:r <CR> 
" autocmd filetype cpp nnoremap <F10> :!./%:r<CR>

"""LaTeX settings
autocmd FileType tex :NoMatchParen
autocmd FileType tex :set tw=110


