#include<stdio.h>
#include <math.h>

int main(void)
{
    long double n,i;
    n = 600851475143;
    printf("\n\nPrime Factors of %0.Lf is: ",n);
    for(i=2;i<=n;i++)
    {
        if(fmod(n, i)==0)
        {
            printf("%0.Lf,",i);
            n=n/i; 
            i--; 
            if(n==1) 
                break; 
        } 
    } 
    return 0;
}