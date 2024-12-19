#include <stdio.h>
int main ()
{
	int x;
	float t1,t2;
	scanf("%d",&x);
	t1=27+23+x/3.0;
	t2=x/1.2;
	if(t1<t2)
	 printf("Bike\n");
    else if(t1>t2)
   printf("Walk\n");
    else
    printf("All\n");
   return 0;
}
