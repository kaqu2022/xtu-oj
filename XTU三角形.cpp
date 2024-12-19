#include <stdio.h>
int a[105];
int main ()
{
	int N,i;
	while(scanf("%d",&N)&&N!=0)
	{
		for(i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}
		while(N--)
		{
			for(i=0;i<N;i++)
			{
				a[i]=(a[i]+a[i+1])%2013;
			}
	    }
	    printf("%d\n",a[0]);
    }
    return 0;
}
