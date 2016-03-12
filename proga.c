#include <stdio.h>


void function(float a, float b, float c);

int main()

{
	float a  = 0;
	float b  = 0;
	float c  = 0;
	
	printf( " a*x^2 + b*x + c = 0\n " );

	printf( " input a =\n " );
	scanf( "%f", &a );

	printf( " input b =\n " );
	scanf( "%f", &b );

	printf( " input c =\n " );
	scanf( "%f", &c );

	printf( "(%.2f)*x^2 + (%.2f)*x + (%.2f) = 0 \n", a, b, c );

	function(a, b, c);
	
	return 0;

}
