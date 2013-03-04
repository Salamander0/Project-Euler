#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double sum1=0, sum2=0;
    
    for(int i=0; i<=100; i++){
        sum1 += pow(i, 2);
        sum2 += i;
    }
    sum2 = pow(sum2, 2);
    printf("%0.lf", sum2-sum1);
    return EXIT_SUCCESS;
}