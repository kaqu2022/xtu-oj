#include<stdio.h>
int n;
int m;
int arr[50]; 
int st[50];

void dfs(int x,int start)//升序排列，当前位置从哪一数字开始
{
	if(x>m)
	{
		for(int i = 1;i<=m;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		return ;
	}
	for(int i = start;i<=n;i++)//遍历数字 
	{
		if(!st[i])//未用过 避免重复 
		{
			arr[x] = i;
			st[i] = 1;
			dfs(x+1,i+1);
			arr[x] = 0;
			st[i] = 0; 
		}
	}
}
int main()
{
	scanf("%d%d",&n, &m);
	dfs(1,1);
	return 0;
}
