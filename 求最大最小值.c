#include <stdio.h>
int main ()
{
	int N,x,y,i;
	int a[10001];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		x=a[0];
		y=a[0];
		if(a[i]>x)
		 x=a[i];
	    if(a[i]<y)
	     y=a[i];
  	}
  	printf("%d %d\n",x,y);
  	return 0;
}
