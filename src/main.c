#include <stdlib.h>
#include <stdio.h>

#include "vecadd.h"

int main() {
    const int n = 10;

    double *a = calloc(n, sizeof(double));
    double *b = calloc(n, sizeof(double));
    double *c = calloc(n, sizeof(double));

    int i;
    for (i = 0; i < n; i++) {
        a[i] = i;
        b[i] = i*i;
    }

    vecadd(a, b, c, n);

    for (i = 0; i < n; i++)
        printf("%f ", c[i]);
    printf("\n");

    free(a);
    free(b);
    free(c);

    return 0;
}
