#include <stdio.h>
#include <stdlib.h> 

int main() {
// ispis memorijske velièine (u bajtovima) pojedinih tipova varijabli
	printf( "Sizeof(char)    = %d\n", sizeof( char ));
	printf( "\nSizeof(int)     = %d\n", sizeof( int ));
	printf( "\nSizeof(short)   = %d\n", sizeof( short ));
	printf( "\nSizeof(long)    = %d\n", sizeof( long ));
	printf( "\nSizeof(float)   = %d\n", sizeof( float ));
	printf( "\nSizeof(double)  = %d\n", sizeof( double ));

	system("pause");

	return(0);
}
