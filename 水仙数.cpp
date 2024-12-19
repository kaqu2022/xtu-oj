#include <stdio.h>
#include <math.h>
int main ()
{
	int x;
	while(scanf("%d",&x)&&x!=0)
	{
		int n=0,t,i,j=x;
		int sum=0;
		while(j>0)
		{
			j = j/10;
			n++;
		}
		j=x;
		for( i=0; i<n; i++)
		{
			t =j%10;
			sum = sum +pow(t,n);
			j =j/10;
		}
		if(sum==x)
		 printf("Yes\n");
		else
		 printf("No\n");
	}
	return 0;
}
