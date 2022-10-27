
" Use the marker method of folding. : zo, zc && zR, zM {{{
augroup filetype_vim
    autocmd!
    autocmd FileType vim setlocal foldmethod=marker
augroup END
"}}}

""" General editor settings ========================================== {{{
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
set ruler

set shellslash
set number
set relativenumber
set cino+=L0 
set belloff=all
setlocal indentkeys-=:
" }}}

" Theme Setting {{{
set t_Co=256
set t_ut=
"set background=dark
"set background=light
"hi Comment guifg=#808080
"hi Comment ctermfg=LightBlue
"highlight Normal ctermfg=grey ctermbg=darkblue
"}}}

" Plugin setup ===================================================={{{
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
Plugin 'VundleVim/Vundle.vim'
Plugin 'preservim/nerdtree'
"Plugin 'lervag/vimtex'
Plugin 'wondol2/vim-cpp-enhanced-highlight'
"Plugin 'jaxbot/semantic-highlight.vim'
Plugin 'vim-airline/vim-airline'
Plugin 'tomasiser/vim-code-dark'
Plugin 'tpope/vim-commentary'
call vundle#end()
filetype plugin indent on
"}}}
set shortmess=a

""" Keybindings for { completion, jk for escape, ctrl-a to select all
inoremap {<CR>  {<CR>}<Esc>O
inoremap {}     {}
" imap jk         <Esc>
map <C-a> <esc>ggVG<CR>

"Append template to new C++ files
autocmd BufNewFile *.cpp 0r /home/wondol/ps/scripts/template.cpp
noremap <F1> <ESC> :NERDTreeToggle <CR>
inoremap <F1> <ESC> :NERDTreeToggle <CR>
noremap <F10> <ESC> :wq! <CR>
inoremap <F10> <ESC> :wq! <CR>

""" Compile and run
augroup filetype_cpp
    autocmd!
    autocmd filetype cpp highlight Normal ctermfg=141 "105 141
    autocmd filetype cpp highlight cppSpecialCharacters ctermfg=251

    autocmd filetype cpp noremap <F5> <ESC> :w <CR> :!g++ -I/home/wondol/ps/scripts -lm -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %:r.out <CR>
    autocmd filetype cpp inoremap <F5> <ESC> :w <CR> :!g++ -I/home/wondol/ps/scripts -lm -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %:r.out <CR>
    autocmd filetype cpp noremap <F9> <ESC> :w <CR> :!g++ -I/home/wondol/ps/scripts -lm -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %:r.out % && ./%:r.out <CR> :!rm -f %:r.out <CR>
    autocmd filetype cpp noremap <F9> <ESC> :w <CR> :!g++ -I/home/wondol/ps/scripts -lm -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %:r.out % && ./%:r.out <CR> :!rm -f %:r.out <CR>

    autocmd filetype cpp setlocal commentstring=//\ %s
augroup END
" fsanitize=address -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %< % && ./%< <CR>
" autocmd filetype cpp nnoremap <F9> :w <bar> !build.sh %:r <CR> 
" autocmd filetype cpp nnoremap <F10> :!./%:r<CR>

"""LaTeX settings
autocmd FileType tex :NoMatchParen
autocmd FileType tex :set tw=110

colorscheme codedark
let g:airline_theme = 'codedark'
let g:cpp_no_function_highlight = 1

