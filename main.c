#include <stdio.h>
#include "mymath.h"

int main() {
	double userNum;
	printf("please insert a real number\n");
	scanf("%lf" ,&userNum);
	double function1, function2 ,function3;
	function1= sub ( add( exphw( (int)userNum ) , powhw(userNum, 3)) , 2);
	function2= add( mul(3, userNum) , mul(2 ,powhw(userNum, 2) ) );
	function3= sub( div(mul(4, powhw(userNum, 3) ), 5 ) , mul(userNum, 2));

	printf("the number for x is %f\n", userNum);
	printf ("the value of first f(x) = e^x +x^3 -2 at the point %.4f is %.4f\n",userNum, function1);
	printf ("the value of sedond f(x) = 3x + 2x^2 at the point %.4f is %.4f\n",userNum, function2);
	printf ("the value of third f(x) = (4x^3)/5 -2x at the point %.4f is %.4f\n",userNum, function3);

	return 0;
}
