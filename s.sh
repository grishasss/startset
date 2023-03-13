#!/bin/bash



g++  gen.cpp -o generator
g++  -O2 2.cpp  -o original
g++  -O2 1.cpp -o brute 



for((i=1;i<10000;i++))
do
	./generator > test
	./original < test > a
	./brute < test > b
	if diff a b; then
		echo "Test ${i}: OK"
	else  
		echo "Test ${i}: WA"
		break;
	fi
done