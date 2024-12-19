#include<stdio.h>
int main()
{
	int a, b, k = 0;
    while(scanf("%d %d",&a,&b)&&(a||b))//a,b不能同为0 
    {
		printf("Case %d: %d\n",++k,a+b);
	}
	return 0;
}
