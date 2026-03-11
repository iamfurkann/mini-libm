#include "../include/f_math.h"
#include <stdio.h>
#include <math.h>

int main()
{

    double a = -4;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
    a = 0;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
    a = 1e308;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
    a = 0.00001;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
}