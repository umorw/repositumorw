#include <stdio.h>
#include <math.h>

void function(float a, float b, float c)

{
	float x1 = 0;
	float x2 = 0;
	float d  = 0;
	
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
}

