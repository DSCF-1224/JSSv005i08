static void FPrintfZigguratMethodTable( FILE *const fp, const int i_max, const unsigned long *const k, const float *const f, const float *const w )
{
    for (int i = 0; i < i_max; i++)
    {
        fprintf( fp, "%5d%11lu%15.8e%15.8e\n", i, k[ i ], f[ i ], w[ i ] );
    }
}

void FPrintfZigguratMethodTableExp( FILE *const fp )
{
    FPrintfZigguratMethodTable( fp, 256, ke, fe, we );
}

void FPrintfZigguratMethodTableNor( FILE *const fp )
{
    FPrintfZigguratMethodTable( fp, 128, kn, fn, wn );
}
