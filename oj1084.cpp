#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main()
{
	double a, b, p, c;
	scanf("%lf %lf %lf",&a,&b,&p);
	c = sqrt(a*a + b*b - 2*a*b*cos(p/180*PI));
	printf("%g\n",c);
}
