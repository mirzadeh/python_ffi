from vecadd import add
import numpy as np

a = np.random.rand(100)
b = np.random.rand(100)
print(np.allclose(a+b, add(a,b)))