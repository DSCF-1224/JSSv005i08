static void PrintfZigguratMethodTable( const int i_max, const unsigned long *const k, const float *const f, const float *const w )
{
    for (int i = 0; i < i_max; i++)
    {
        printf( "%5d%11lu%15.8e%15.8e\n", i, k[ i ], f[ i ], w[ i ] );
    }

    printf( "\n" );
}

void PrintfZigguratMethodTableExp(void)
{
    PrintfZigguratMethodTable( 256, ke, fe, we );
}

void PrintfZigguratMethodTableNor(void)
{
    PrintfZigguratMethodTable( 128, kn, fn, wn );
}
