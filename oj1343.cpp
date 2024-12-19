#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		a.reset();
		int n, k, flag = 1;
		scanf("%d %d", &n, &k);
		int temp = n-1,sub = k+1;
		a[1] = 1;
		int x = 1;
		while(temp--)
		{
			a[(x+sub)%n] = 1;
			a[(x-sub+n)%n] = 1;
		}
		if (a.any())
		{
			printf("No\n");
		}		 
		else
		{
			printf("Yes\n");	
		}
	}
}
