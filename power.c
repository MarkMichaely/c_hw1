#include <stdio.h>
#include "myMath.h"
#define EXPONENT 2.718281828

//exphw stands for exp homework to avoid warnings
double exphw (int x) {
	double exp;
	exp= EXPONENT;
	int i;
	for ( i=1 ; i<x ; i++)
	{
		exp *= EXPONENT;
	}
	return exp;
}

//powhw stands for pow homework to avoid warnings
double powhw(double x, int y) {
	double xPow = x;
	int i;
	for ( i=1 ; i<y ; i++)
	{
		xPow *= x;
	}
	return xPow;
}
