#include<stdio.h>

int judge(int a[],int count)
{
	int flag = 1;//标志单调递增 
	for(int i = 0;i<count-1;i++)
	{
		if(a[i]>=a[i+1])
		{
			flag = 0;
			break;
		}
	}
	if(flag == 0)
	 return 0;
	else
	 return 1;
}
int change(int a[],int n)
{
	for(int i = 2;i<50;i++)
	{
		int t = n;
		int cnt = 0;
		while(t)
		{
			a[cnt] = t%i;
			t/=i;
			cnt++;
		}
	//	printf("%d\n",judge(a,cnt));
		if(judge(a,cnt)==1)
		{
			 return i;
		}
	}
	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[50];
		int n;
		scanf("%d",&n);
		int r  =change(a,n);
		printf("%d\n",r);
	}
}
