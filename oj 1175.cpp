#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	int a[55], b[55];
	while(scanf("%d",&n)&&n)
	{
		int up = 0,down = 0,still = 0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(a));
		for(int i = 0;i<n;i++)
		 scanf("%d",&a[i]);
		for(int i = 0;i<n;i++)
		 scanf("%d",&b[i]);
		for(int i = 0;i<n;i++)
		{
			if(a[i]>b[i])
			 down++;
			else if(a[i]<b[i])
			 up++;
			else
			 still++; 
		}
		printf("%d %d %d\n",up, still, down);
	}
}
