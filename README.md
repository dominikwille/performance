# Performance
Compare performances of different languages and its interpreters / compilers.

Each implementation of the program measures the time it needs to calculate a certain amount of prime numbers with an unoptimized brute force algorithm.

# Results on my System
Java: 63772 ms

C:    63728 ms

PHP:  457932 ms

Python: currently very long

Python with jit: 148209 ms

___________________________________________________
Used Compilers/Interpreters:

clang version 3.9.1 (tags/RELEASE_391/final)

javac 1.8.0_112

PHP 7.0.14 (cli) (built: Dec  7 2016 17:11:27) ( NTS )

Python 3.6.0

Python 3.6.4 :: Anaconda, Inc. (with numba)

# Usage

javac performance.java && java performance

clang performance.c && ./a.out 

php performance.php

python performance.py

python performance.jit.py


