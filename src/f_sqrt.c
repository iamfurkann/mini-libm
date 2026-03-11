#include "f_math.h"
#include <stdio.h>

static double f_tahmin(double arg)
{
    float kucuk = 0, buyuk = 0;

    for (int i = 0; i <= arg; i++)
    {
        if (i*i > arg)
            buyuk = i;
        if (kucuk <= arg && buyuk*buyuk >= arg)
        {
            buyuk = (kucuk + buyuk) / 2;
            break;
        }
        kucuk = i;
    }

    return (buyuk);
}

double f_sqrt(double arg)
{
    double x = f_tahmin(arg);
    double eski_x = 0.0;

    double tolerans = 0.000001;
    while (f_fabs((x - eski_x) / x) > tolerans)
    {
        eski_x = x;
        x = (x + (arg/x)) / 2; 
    }
    return (x);
}