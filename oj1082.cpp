#include<stdio.h>
#define PI 3.14159265
#include<math.h>
int main()
{
	double n = sin(PI/4)*sin(PI/4)+sin(PI/4)*cos(PI/4)-cos(PI/4)*cos(PI/4);
	printf("%g\n",n);
}
