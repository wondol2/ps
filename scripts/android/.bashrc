# ~/.bashrc: executed by bash(1) for non-login shells.
# see /usr/share/doc/bash/examples/startup-files (in the package bash-doc)
# for examples

# If not running interactively, don't do anything
[ -z "$PS1" ] && return

# don't put duplicate lines in the history. See bash(1) for more options
# ... or force ignoredups and ignorespace
HISTCONTROL=ignoredups:ignorespace

# append to the history file, don't overwrite it
shopt -s histappend

# for setting history length see HISTSIZE and HISTFILESIZE in bash(1)
HISTSIZE=1000
HISTFILESIZE=2000

# check the window size after each command and, if necessary,
# update the values of LINES and COLUMNS.
shopt -s checkwinsize

# make less more friendly for non-text input files, see lesspipe(1)
[ -x /usr/bin/lesspipe ] && eval "$(SHELL=/bin/sh lesspipe)"

# set variable identifying the chroot you work in (used in the prompt below)
if [ -z "$debian_chroot" ] && [ -r /etc/debian_chroot ]; then
    debian_chroot=$(cat /etc/debian_chroot)
fi

# set a fancy prompt (non-color, unless we know we "want" color)
case "$TERM" in
    xterm-color|*-256color) color_prompt=yes;;
esac

# uncomment for a colored prompt, if the terminal has the capability; turned
# off by default to not distract the user: the focus in a terminal window
# should be on the output of commands, not on the prompt
#force_color_prompt=yes

if [ -n "$force_color_prompt" ]; then
    if [ -x /usr/bin/tput ] && tput setaf 1 >&/dev/null; then
	# We have color support; assume it's compliant with Ecma-48
	# (ISO/IEC-6429). (Lack of such support is extremely rare, and such
	# a case would tend to support setf rather than setaf.)
	color_prompt=yes
    else
	color_prompt=
    fi
fi

if [ "$color_prompt" = yes ]; then
    # PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
    PS1='${debian_chroot:+($debian_chroot)}\[\033[01;30m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
else
    PS1='${debian_chroot:+($debian_chroot)}\u@\h:\w\$ '
fi
unset color_prompt force_color_prompt

# If this is an xterm set the title to user@host:dir
case "$TERM" in
xterm*|rxvt*)
    # PS1="\[\e]0;${debian_chroot:+($debian_chroot)}\u@\h: \w\a\]$PS1"
    PS1="\[\e]0;${debian_chroot:+($debian_chroot)}\u@\h: \w\a\]$PS1"
    ;;
*)
    ;;
esac

# enable color support of ls and also add handy aliases
if [ -x /usr/bin/dircolors ]; then
    test -r ~/.dircolors && eval "$(dircolors -b ~/.dircolors)" || eval "$(dircolors -b)"
    alias ls='ls --color=auto'
    #alias dir='dir --color=auto'
    #alias vdir='vdir --color=auto'

    alias grep='grep --color=auto'
    alias fgrep='fgrep --color=auto'
    alias egrep='egrep --color=auto'
fi

# some more ls aliases
alias ll='ls -alF'
alias la='ls -A'
alias l='ls -CF'

# Alias definitions.
# You may want to put all your additions into a separate file like
# ~/.bash_aliases, instead of adding them here directly.
# See /usr/share/doc/bash-doc/examples in the bash-doc package.

if [ -f ~/.bash_aliases ]; then
    . ~/.bash_aliases
fi

# enable programmable completion features (you don't need to enable
# this, if it's already enabled in /etc/bash.bashrc and /etc/profile
# sources /etc/bash.bashrc).
#if [ -f /etc/bash_completion ] && ! shopt -oq posix; then
#    . /etc/bash_completion
#fi





#################################################################################
#################################################################################
#################################################################################

# unlimit stack size
ulimit -s unlimited

# paths
export PATH=$PATH:"~/ps/scripts"

# alias
alias python="python3"
alias code="vim"

alias problems="cd ~/ps/problems"
alias baekjoon="cd ~/ps/problems/baekjoon"
alias jongmanbook="cd ~/ps/problems/jongmanbook"
alias contest="cd ~/ps/contest"
alias current="cd ~/ps; mkdir -p current; cd ~/ps/current"
alias scripts="cd ~/ps/scripts"
alias tests="cd ~/ps/tests"
alias algorithm="cd ~/ps/algorithm"
alias vimrc="vim ~/.vimrc"
alias bashrc="code ~/.bashrc"
alias bashrcsource="source ~/.bashrc"
alias sourcebashrc="source ~/.bashrc"

alias diary="cd ~/memo/diary"
alias todo="code ~/memo/todo.txt"
alias study="cd ~/study"
alias speech="cd ~/memo/speech"

alias template="code ~/ps/scripts/template.cpp"
alias input="code ~/ps/scripts/input.txt"

alias .="cd ./ | ls"
alias ..="cd ../"
alias ...="cd ../../"
alias ....="cd ../../../"
alias .....="cd ../../../../"
alias BASE_PATH="/data/data/com.termux/files/home"

# make competitive-programming style file

t(){
    if [[ $1 == *".cpp" ]]; then
        cp -iu ~/ps/scripts/template.cpp $1
        code $1
    elif [[ $1 == *"." ]]; then
        cp -iu ~/ps/scripts/template.cpp $1cpp
        code $1cpp
    else
        cp -iu ~/ps/scripts/template.cpp $1.cpp
        code $1.cpp
    fi
}

gentem(){
    if [[ $1 == *".cpp" ]]; then
        cp -iu ~/ps/scripts/generater_template.cpp $1
        code $1
    elif [[ $1 == *"." ]]; then
        cp -iu ~/ps/scripts/generater_template.cpp $1cpp
        code $1cpp
    else
        cp -iu ~/ps/scripts/generater_template.cpp $1.cpp
        code $1.cpp
    fi
}

# g++ compile/execute command 
g(){
    if [[ $1 == *".cpp" ]]; then
        gtemp=$1
        gtemp=${gtemp:0:(-4)}
    elif [[ $1 == *"." ]]; then
        gtemp=$1
        gtemp=${gtemp:0:(-1)}
    else
        gtemp=$1
    fi
# Need to change /root properly
    g++-11 -I/data/data/com.termux/files/home/ps/scripts -O2 -lm -std=c++17 -o $gtemp.out $gtemp.cpp
    ./$gtemp.out
    rm -f $gtemp.out
}






# for expert certificate
gg(){
    g++ -c $1.cpp
    g++ -c $2.cpp
    g++ -o $1$2.out $1.o $2.o
    ./$1$2.out
    rm -f ./$1$2.out
}

# erase all compiled files
rm -f ~/*/*/*/*/*.out
rm -f ~/*/*/*/*.out
rm -f ~/*/*/*.out
rm -f ~/*/*.out
rm -f ~/*.out


clear








