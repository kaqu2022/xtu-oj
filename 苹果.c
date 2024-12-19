#include <stdio.h>
int main ()
{
	int n,x,y;
	scanf("%d,%d,%d",&n,&x,&y);
	if(y%x!=0)
	 printf("%d\n",n-y/x-1);
    else
     printf("%d\n",n-y/x);
    return 0;
}
