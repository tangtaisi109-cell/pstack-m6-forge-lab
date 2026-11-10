#include "calc.h"

long calc_add(long a, long b) { return a + b; }

long calc_mul(long a, long b) { return a * b; }

int calc_div(long a, long b, long *out) {
    /* Contract (include/calc.h): a zero divisor must be rejected and *out must
     * be left untouched. Dividing first and checking later would trap. */
    if (b == 0) return -1;
    *out = a / b;
    return 0;
}
