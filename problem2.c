//
//  main.c
//  euler
//
//  Created by Salamander on 02.03.13.
//  Copyright (c) 2013 Salamander. All rights reserved.
//

#include <stdio.h>

int f(int n)
{
    if ((n==1) || (n==0)) return n;
    else return f(n-1)+f(n-2);
}

int main(void)
{
    double sum = 0;
    int fib = 0;
    
    for(int i=0;;i++){
        fib = f(i);
        if(fib <= 4000000){if(fib % 2 == 0) sum += fib;}
        else {
            printf("%f", sum);
            return 0;
        }
    }
    return 0;
}


