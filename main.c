#include <stdlib.h>
#include <stdio.h>

#include "rnorrexp.c"

int main(void)
{
    FILE *fp;

    zigset(0);

    fp = fopen( "exp.txt", "wx" );

    if ( fp )
    {
        FPrintfZigguratMethodTableExp( fp );
        fclose( fp );
    }

    fp = fopen( "nor.txt", "wx" );

    if ( fp )
    {
        FPrintfZigguratMethodTableNor( fp );
        fclose( fp );
    }

    return EXIT_SUCCESS;
}
