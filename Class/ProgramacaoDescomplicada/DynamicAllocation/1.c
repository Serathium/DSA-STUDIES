#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = ( int *)malloc( 5 * sizeof( int ) );
    int *p1 = array;

    for( int i = 0; i < 5; i++ ) {
        printf( "Digite o valor do número %d: ", i+1 );
        scanf( "%d", p1 );
        p1++;
    }

    p1 = array;

    for( int i = 0; i < 5; i++ ) {
        printf( "\n Número %d: %d\n", i+1, *p1 );
        p1++;
    }

    free( array );
}