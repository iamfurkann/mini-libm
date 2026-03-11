#include "f_math.h"

int f_abs(int x)
{
    if (x < 0)
        x *= -1;
    return x;
}