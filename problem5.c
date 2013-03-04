#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int ind;
    for(long double n = 20000; ; n++){
        ind =0;
        for(double i=1; i<=20;i++){
            if((fmod(n,i))!=0){
               // printf("%0.Lf fail\n", n);
                ind = 1;
                break;
            }
        }
        if (ind == 0){ printf("%0.Lf", n); return EXIT_SUCCESS;}
    }
    return EXIT_SUCCESS;
}