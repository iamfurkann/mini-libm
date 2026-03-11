#include "f_math.h"

double make_nan(void)
{
    union {
        double d;
        uint64_t u;
    } tmp;

    tmp.u = 0x7FF8000000000000;
    return tmp.d;
}