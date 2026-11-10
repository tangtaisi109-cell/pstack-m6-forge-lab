#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"

int main(int argc, char **argv) {
    if (argc != 4) {
        fprintf(stderr, "usage: m7calc add|mul|div <a> <b>\n");
        return 2;
    }
    long a = strtol(argv[2], NULL, 10);
    long b = strtol(argv[3], NULL, 10);
    long r = 0;
    if (strcmp(argv[1], "add") == 0) { r = calc_add(a, b); printf("%ld\n", r); return 0; }
    if (strcmp(argv[1], "mul") == 0) { r = calc_mul(a, b); printf("%ld\n", r); return 0; }
    if (strcmp(argv[1], "div") == 0) {
        if (calc_div(a, b, &r) != 0) { fprintf(stderr, "division by zero\n"); return 3; }
        printf("%ld\n", r);
        return 0;
    }
    fprintf(stderr, "unknown op: %s\n", argv[1]);
    return 2;
}
