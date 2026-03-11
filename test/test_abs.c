#include "../include/f_math.h"
#include <stdio.h>
#include <math.h>

int main()
{

    double a = -4.0;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
    a = 0.0;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
    a = 1e-12;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
    a = 1e308;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
    a = NAN;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
    a = INFINITY;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
    a = 2.0;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
    a = 0.25;
    printf("sayi sqrt: %f\n", f_sqrt(a));
    printf("sayi sqrt: %f\n", sqrt(a));
    printf("----------------------------\n");
    
       
}