#include<stdio.h>
#define N 10
int n;
int st[N];
int arr[N];
void dfs(int x)//在X位置上选数 
{
	if(x>n)
	{
		for(int i = 1;i<=n;i++)//输出 
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		return ;
	}
	for(int i = 1; i <= n; i++)
	{
		if(!st[i])
		{
			arr[x] = i;
			st[i] = 1;
			dfs(x+1);
			arr[x] = 0;
			st[i] = 0;
		}
	}
}

int main ()
{
	scanf("%d",&n);
//	dfs(1);
	return 0;
}
