from distutils.core import setup
from distutils.extension import Extension
from Cython.Build import cythonize

import numpy as np

ext_modules = [
    Extension("vecadd",
              sources=["vecadd.pyx"],
              libraries=["vecadd"], library_dirs=["../src"],
              include_dirs=[np.get_include(), "src"]  # Unix-like specific
              )
]

setup(name="MyFirstCython",
      ext_modules=cythonize(ext_modules))
