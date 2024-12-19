#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d", &n);
	for(k = 1; k<=n;k++)
	{
		int a, b;
		scanf("%d %d",&a,&b);
		printf("Case %d: %d\n",k,a+b);
	}
	return 0;
}
