#ifndef M7CALC_CALC_H
#define M7CALC_CALC_H
/* Integer arithmetic used by the m7calc CLI.
 * Division and modulo must reject a zero divisor rather than trap. */
long calc_add(long a, long b);
long calc_mul(long a, long b);
/* Returns 0 on success and writes the quotient to *out. Returns -1 when
 * divisor == 0 and leaves *out untouched. */
int calc_div(long a, long b, long *out);
#endif
