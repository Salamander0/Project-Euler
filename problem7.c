#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double primes[10001];
    double n_primes = 0;
    int i;
    
    for (i = 2; n_primes < 10001; i++) {
        int j;
        
        for (j = 0; j < n_primes; j++) {
            if (fmod(i, primes[j]) == 0) {
                goto not_prime;
            }
        }
        primes[(int)n_primes] = i;
        n_primes++;
        
    not_prime:
        ;
    }
        printf ("%0.f ", primes[10000]);
        if (i % 10 == 9) {
            printf ("\n");
        }
    
    return EXIT_SUCCESS;
}