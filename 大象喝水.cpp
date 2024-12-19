#include <stdio.h>
int main ()
{
	int h,r,n;
	double Pi=3.14159;
	scanf("%d %d\n",&h,&r);
    printf("%d\n",int(20/(Pi*r*r*h*0.0001))+1);
    return 0;
}
