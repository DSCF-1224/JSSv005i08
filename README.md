# The Ziggurat Method for Generating Random Variables

## Original

- [The Ziggurat Method for Generating Random Variables | Journal of Statistical Software](https://www.jstatsoft.org/article/view/v005i08)
- [C code (Original implementation)](https://www.jstatsoft.org/index.php/jss/article/view/v005i08/2507)

## Objective

To check the behavior of the original implementation

## Fixes in the original implementation

Replaced `fabs` with `labs` on line 48 of the [original code](https://www.jstatsoft.org/index.php/jss/article/view/v005i08/2507).


Replaced line 114 of the [original code](https://www.jstatsoft.org/index.php/jss/article/view/v005i08/2507) with the following line.

```c
#include "rnorrexp-added.c"
```

<!-- EOF -->
