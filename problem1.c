//
//  main.c
//  euler
//
//  Created by Salamander on 02.03.13.
//  Copyright (c) 2013 Salamander. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    double sum;
    for(int i=0; i<1000; i++){
        if(((i%3)==0) || ((i%5)==0))
            sum = sum + i;
    }
    printf("%f", sum);
    return 0;
}

