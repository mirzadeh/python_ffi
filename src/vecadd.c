#include "vecadd.h"
#include <stdio.h>

void vecadd(double* a, double *b, double *c, int n) {
    printf(" *** Calling function %s from the C library *** \n", __PRETTY_FUNCTION__);
    int i;

    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    printf(" *** done *** \n");
}