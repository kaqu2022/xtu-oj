#include<stdio.h>
int main()
{
	int a, b, k = 0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
		printf("Case %d: %d\n",++k,a+b);
	}
	return 0;
}
