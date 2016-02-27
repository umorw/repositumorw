#include <stdio.h>
#include <math.h>

int main()

{
	float a  = 0;
	float b  = 0;
	float c  = 0;
	float x1 = 0;
	float x2 = 0;
	float d  = 0;

	printf( " a*x^2 + b*x + c = 0\n " );

	printf( " input a =\n " );
		scanf( "%f", &a );

	printf( " input b =\n " );
		scanf( "%f", &b );

	printf( " input c =\n " );
		scanf( "%f", &c );

	printf( "(%.2f)*x^2 + (%.2f)*x + (%.2f) = 0 \n",a,b,c );

	if( a == 0 ){
		printf( " the equation is not square\n " );
	}
	else{
		d = b * b - 4 * a * c;
		if( d < 0 ){
			printf(" D < 0, no decision\n ");
		}
		if( d == 0 ){
			x1 = (-b) / ( 2 * a );
			printf(" D = 0, one root of equation: %.2f\n ", x1);
		}
		if( d > 0 ){
			printf( " D = %.2f\n ", d );
			float f = sqrt(d);
			float g = 2 * a;
			x1 = ( -b - f ) / g;
			x2 = ( -b + f ) / g;
			printf(" Equation roots: x1 = %.2f, x2 = %.2f \n ", x1, x2);
		}
	}

	return 0;

}
