
#### Own the directory you want by using chown:
sudo chown your_username directory

ulimit -s unlimited

export PATH=$PATH:"~/ps/scripts"

g(){
    g++ -std=c++17 -o $1 $1.cpp
    ./$1
}

gg(){ # for expert certificate
    g++ -c $1.cpp
    g++ -c $2.cpp
    g++ -o $1$2 $1.o $2.o
    ./$1$2
}