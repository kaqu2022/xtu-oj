#include<stdio.h>
int a[10];
int judge(int cnt)
{
	int flag = 1;
	//printf("cnt:%d\n",cnt);
	for(int i = 0;i<=(cnt/2);i++)
	{
		if(a[i]!=a[cnt-i-1])
		{
			flag = 0;
			break;
		}
	}
	//printf("flag:%d\n",flag);
	if(flag==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int change(int n)//10进制数转n进制 
{
	for(int i = 2;i<10;i++)//遍历进制 
	{
		int t = n,cnt = 0;
		while(t)
		{
			a[cnt] = t%i;
			t/=i;
			cnt++;
		}
	//	printf("cnt:%d\n",cnt);
//		for(int j = cnt-1;j>=0;j--)
//		 printf("%d",a[j]);
//		printf("\n");
		//转换为i进制后判断回文数 
		if(judge(cnt)==1)
		 return i;
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int m = change(n);
		printf("%d\n",m);
	}
	return 0;
}
