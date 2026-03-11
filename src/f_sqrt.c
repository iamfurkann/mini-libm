#include "f_math.h"

static double f_guess(double arg)
{
    if (arg < 1.0)
        return 1.0;
    return arg / 2;
}

double f_sqrt(double arg)
{
    if (arg < 0.0)
        return make_nan();

    if (arg == 0.0 || arg == 1.0)
        return arg;

    double x = f_guess(arg);
    double old_x = 0.0;

    double tolerance = 1e-15;
    while (f_fabs((x - old_x) / x) > tolerance)
    {
        old_x = x;
        x = (x + (arg/x)) / 2; 
    }
    return (x);
}