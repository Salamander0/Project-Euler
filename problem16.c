//GNU GMP library needed to compile this source code!!!

#include <stdio.h>
#include <gmp.h>
#include <string.h>
#include <stdlib.h>

int sumnum(char number[330]){
    long double sum=0;
    for(int i=0; i<strlen(number); i++){
        sum +=number[i]-'0';
    }
    printf("%zd\n%0.Lf\n",strlen(number), sum);
    return 0;
}

int main(void)
{
    mpz_t result;
    char number[330];
    mpz_init(result);
    mpz_ui_pow_ui(result, 2, 1000);
    mpz_get_str(number, 10, result);
    printf("%s\n", number);
    mpz_clear(result);
    sumnum(number);
    return 0;
}