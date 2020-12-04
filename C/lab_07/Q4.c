#include <stdio.h>

#define N   10

int main( void )
{
    int a[N] = {6,1,4,3,7,8,2,10,9,11};
    int i, j;

    printf( "Array[%d] = { ", N );
    i = 0;
    do
    {
        printf( "%d", a[i] );
    } while ( ++i < N && printf( ", " ) );
    printf( " };\n");

    i = 0; j = N;
    while ( i != j )
    {
        if ( a[i] % 2 == 0 )
        {            
            ++i;
        }
        else if ( a[--j] % 2 == 0 )
        {
            int tmp = a[j];
            a[j] = a[i];
            a[i] = tmp;
        }
    }

    printf( "Array[%d] = { ", N );
    i = 0;
    do
    {
        printf( "%d", a[i] );
    } while ( ++i < N && printf( ", " ) );
    printf( " };\n");

    return 0;
}