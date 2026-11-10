#include <assert.h>
#include <stdio.h>
#include "calc.h"

static int fails = 0;
#define CHECK(cond, msg) do { if (!(cond)) { printf("FAIL %s\n", msg); fails++; } else { printf("ok   %s\n", msg); } } while (0)

int main(void) {
    CHECK(calc_add(2, 3) == 5, "add 2+3");
    CHECK(calc_add(-1, 1) == 0, "add -1+1");
    CHECK(calc_mul(6, 7) == 42, "mul 6*7");
    CHECK(calc_mul(0, 5) == 0, "mul 0*5");
    long out = 123;
    CHECK(calc_div(10, 2, &out) == 0 && out == 5, "div 10/2");
    out = 123;
    /* The contract says a zero divisor must be rejected and *out untouched.
     * This assertion is the one the shipped source fails. */
    CHECK(calc_div(9, 0, &out) == -1, "div 9/0 rejected");
    CHECK(out == 123, "div 9/0 leaves out untouched");
    printf("%d failures\n", fails);
    return fails == 0 ? 0 : 1;
}
