import cython
import numpy as np
cimport numpy as np

cdef extern from "../src/vecadd.h":
    void vecadd(double* a, double* b, double* c, int size)

@cython.boundscheck(False)
@cython.wraparound(False)
def add(np.ndarray[double] a, np.ndarray[double] b):
    cdef np.ndarray[double] c

    c = np.zeros_like(a)
    vecadd(&a[0], &b[0], &c[0], a.size)

    return c
