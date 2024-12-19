#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%02d:",n/3600);
		n%=3600;
		printf("%02d:",n/60);
		printf("%02d\n",n%60);
	}
}
