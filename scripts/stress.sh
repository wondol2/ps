#!/usr/bin/env bash

if [[ $1 == *".cpp" ]]; then
    wrong=$1
    wrong=${wrong:0:(-4)}
elif [[ $1 == *"." ]]; then
    wrong=$1
    wrong=${wrong:0:(-1)}
else
    wrong=$1
fi

if [[ $2 == *".cpp" ]]; then
    slow=$2
    slow=${slow:0:(-4)}
elif [[ $2 == *"." ]]; then
    slow=$2
    slow=${slow:0:(-1)}
else
    slow=$2
fi

if [[ $3 == *".cpp" ]]; then
    gen=$3
    gen=${gen:0:(-4)}
elif [[ $3 == *"." ]]; then
    gen=$3
    gen=${gen:0:(-1)}
else
    gen=$3
fi
echo "Test start ..."

# wrong=$1
# slow=$2
# gen=$3
g++ -I/home/wondol/ps/scripts -O2 -lm -std=c++17 -o $wrong.out $wrong.cpp
g++ -I/home/wondol/ps/scripts -O2 -lm -std=c++17 -o $slow.out $slow.cpp
g++ -I/home/wondol/ps/scripts -O2 -lm -std=c++17 -o $gen.out $gen.cpp


for ((testNum=0;testNum<$4;testNum++))
do
    ./$gen.out > stressInput
    ./$slow.out < stressInput > stressSlow
    ./$wrong.out < stressInput > stressWrong
    H1=`md5sum stressWrong`
    H2=`md5sum stressSlow`
    if !(cmp -s "stressWrong" "stressSlow")
    then
        echo "At $testNum, Error found!"
        echo "Input:"
        cat stressInput
        echo "Wrong Output:"
        cat stressWrong
        echo "Slow Output:"
        cat stressSlow

        rm -f $wrong.out
        rm -f $slow.out
        rm -f $gen.out
        rm -f stressWrong
        rm -f stressSlow
        rm -f stressInput
        exit
    fi
done

rm -f $wrong.out
rm -f $slow.out
rm -f $gen.out
rm -f stressWrong
rm -f stressSlow
rm -f stressInput

echo Passed $4 tests
