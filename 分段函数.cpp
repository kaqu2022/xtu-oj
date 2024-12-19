#include <stdio.h>
#include <math.h>
int main ()
{
	float x;
	printf(" ‰»Îx:\n");
	scanf("%f",&x);
	if(x<0)
	 printf("y=1\n");
    else if(x>=1&&x<=5)
     printf("y=%d\n",2*x);
    else if(x>5)
     printf("y=%d\n",sqrt(x));
    return 0;
} 
