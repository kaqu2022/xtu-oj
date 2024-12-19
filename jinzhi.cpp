#include<stdio.h>
//10进制转n进制 n进制可能有字母 
char a[20];
int change(int num,int n)
{
	int i = 0;
	while(num)
	{
		int mod = num%n;
		num/=n;
		if(mod>=0&&mod<=9)
		{
			a[i] = mod+'0';
		}
		else if(mod>=10&&mod<=35)
		{
			a[i] = (char)(mod-10+65);
		}
		else if(mod>=36)
		{
			a[i] = (char)(mod-36+97);
		}
		i++;
		//printf("%d\n",mod);
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
		printf("%c",a[i]);
	}
}
