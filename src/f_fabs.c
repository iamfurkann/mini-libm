#include "f_math.h"

double f_fabs(double arg)
{
    union 
    {
        double d;
        uint64_t i;
    } u;

    u.d = arg;

    u.i &= 0x7FFFFFFFFFFFFFFF;
    return (u.d);
}