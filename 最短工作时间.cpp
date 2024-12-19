#include<bits\stdc++.h>

using namespace std;
int ans[10010],temp;
int l,i,n,t,mini = 0;
int main()
{
	scanf("%d",&n);
	for(int i = 1;i<=n;i++)
	{
		temp = 0;
		scanf("%d",&i);
		scanf("%d",&l);
		while(scanf("%d",&t)&&t)
		{
			temp = max(temp,ans[t]);//保证准备工作序号在之前 
		}
		ans[i] = temp + l;//完成每一个作业时间为前置工作的最长间+当前时作业时间 
		mini = max(mini,ans[i]);
	}
	printf("%d\n",mini);
}	
