#include <stdio.h>
int main ()
{
	float a,b,c,t;
	printf("输入三角形的三边：\n");
	scanf("%f,%f,%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a==b==c)
		 printf("等边三角形\n");
	    else if(a==b||a==c||b==c)
	     printf("等腰三角形\n");
        else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+c*c)
         printf("直角三角形\n");
        else
         printf("普通三角形\n");
        
	}
 
    return 0;
}
