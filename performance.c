#include<stdio.h>
#include<time.h>

int main() {

    int s = 1000000; // Start
    int n = 1000; // Number of prime numbers to find

    int prime_numbers[n];
    int p = 0; // Number of prime numbers found
    char is_prime;

    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC_RAW, &start);

    for (int i = s; p < n; i++) {
        is_prime = 1;
        for (int j = 2; j < i; j++) {

            if (i % j == 0) {
               is_prime = 0;
            }
        }

        if (is_prime) {
          prime_numbers[p++] = i;
        }

     }
     clock_gettime(CLOCK_MONOTONIC_RAW, &end);

     int delta_us = ((end.tv_sec - start.tv_sec) * 1000000 + (end.tv_nsec - start.tv_nsec) / 1000) / 1000;


     for(int k=0; k < n; k++) {
        printf("%i \n", prime_numbers[k]);
     }


     printf("Execution time: %i\n", delta_us);

	return 0;
}
