#include <stdio.h>  
#include <math.h>
int main ()
{
	int a, b, c;
	float disc, x1, x2;
	
	printf("请依次输入3个系数：\n");
	scanf("%d %d %d", &a, &b, &c);
	disc = b*b-(4*a*c);
	
	if (disc>0)
	 {
	 	x1 = (-b + sqrt(disc)) / (2*a);
	    x2 = (-b - sqrt(disc)) / (2*a);
	    printf("x1 = %f,x2 = %f\n", x1, x2);
	 }
    else (disc==0);
     {
     	x1 = (-b) / (2*a);
     	x2 = x1;
     	printf("x1 = x2 = %f\n");
	 }
     
	
	printf("x1 = %d,x2 = %d", x1, x2);
	
	return 0; 
}
//2023.2.26 代码的规范化 
