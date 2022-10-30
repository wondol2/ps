#### How to use clipboard at vim to system
vim --version | grep .xterm_clipboard -o  ==> need to "+xterm_clipboard"
If "-xterm_clipboard",
sudo apt purge vim
sudo apt autoremove
sudo apt install vim-gnome/vim-gtk3

#### Own the directory you want by using chown:
sudo chown your_username directory

#### my .bashrc settings:
ulimit -s unlimited

export PATH=$PATH:"~/ps/scripts"

g(){
    if [[ $1 == *".cpp" ]]; then
        gtemp=$1
        gtemp=${gtemp:0:(-4)}
        g++ -I/home/wondol/ps/scripts -std=c++17 -o $gtemp.out $1
        ./$gtemp.out
    else
        g++ -I/home/wondol/ps/scripts -std=c++17 -o $1.out $1.cpp
        ./$1.out
    fi
}

gg(){ # for expert certificate
    g++ -c $1.cpp
    g++ -c $2.cpp
    g++ -o $1$2.out $1.o $2.o
    ./$1$2.out
}

tem(){
    if [[ $1 == *".cpp" ]]; then
        cp -i ~/ps/scripts/template.cpp $1
        code $1
    else
        cp -i ~/ps/scripts/template.cpp $1.cpp
        code $1.cpp
    fi
}

#### A
