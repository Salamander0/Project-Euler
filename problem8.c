#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
    char number[1000] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
    char first[2], second[2], third[2], fourth[2], fifth[2];
    first[1] = '\0';
    second[1] = '\0';
    third[1] = '\0';
    fourth[1] = '\0';
    fifth[1] = '\0';
    
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, max = 0, new = 0;
    
    for(int i=0; i<996; i++){
        strncpy(first, &number[i], 1);
        strncpy(second, &number[i+1], 1);
        strncpy(third, &number[i+2], 1);
        strncpy(fourth, &number[i+3], 1);
        strncpy(fifth, &number[i+4], 1);
        num1 = atoi(first);
        num2 = atoi(second);
        num3 = atoi(third);
        num4 = atoi(fourth);
        num5 = atoi(fifth);
        new = (num1*num2*num3*num4*num5);
        if (max < new) max = new;
    }
    printf("%d", max);
    return EXIT_SUCCESS;
}