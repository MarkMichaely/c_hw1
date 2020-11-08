#include <stdio.h>
#include "myMath.h"

float add (float x, float y) {
	float c;
	c = x+y;
	return c;
}

float sub (float x, float y) {
	float c;
	c= x-y;
	return c;
}

double mul (double x, int y) {
	double c;
	c = x*y;
	return c;
}

double div (double x, int y) {
	double c;
	c = x/y;
	return c;
}
