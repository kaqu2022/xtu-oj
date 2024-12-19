#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, s, d;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a + b > c && a + c > b && b + c > a)
	{
		d = (a + b + c)/2;
		s = sqrt(d*(d-a)*(d-b)*(d-c));
		printf("%.2lf",s);
	}
	else
	 printf("Not a triangle.");
}
