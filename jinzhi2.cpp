#include<stdio.h>
//10进制转n进制 
int a[20] = {0};
int change(int num,int n)
{
	int i = 0;
	
	while(num)
	{
		int mod = num%n;
		num/=n;
		a[i] = mod;
		i++;
		printf("%d\n",mod);
	}
	return i;
}
int main()
{
	int num, n;
	scanf("%d %d",&num,&n);
	int len = change(num,n);
	for(int i = len-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
