#include <stdlib.h>
#include <stdio.h>

#include "rnorrexp.c"

int main(void)
{
    zigset(0);

    PrintfZigguratMethodTableExp();
    PrintfZigguratMethodTableNor();

    return EXIT_SUCCESS;
}
