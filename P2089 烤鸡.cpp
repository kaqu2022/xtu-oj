#include<stdio.h>
#define N 15
int n;
int st[N];
int arr[N];
int men[100000][N];
int res;
void dfs(int x,int sum)//��x�ֵ��� ,���µ���ζ�̶� 
{
	if(sum>n)//��֦�ص���һ������ 
		return;
	if(x>10)
	{
		if(sum==n)
		{
			res++;
			for(int i =1;i<=10;i++)
			{
				men[res][i] = arr[i];
			}
		}
		return;
	}
	for(int i =1;i<=3;i++)//���Ͽ��� 
	{
		arr[x] = i;
		dfs(x+1,sum+i);
		arr[x] = 0;
	}
}
int main ()
{
	scanf("%d",&n);
	if(n<10||n>30)
		printf("0\n");
	else
	{
		dfs(1,0);
		printf("%d\n",res);
		for(int j = 1;j<=res;j++)
		{
			for(int i = 1;i<=10;i++)
			{
				printf("%d ",men[j][i]); 
			}
			printf("\n");
		}
		
	}
	return 0;
}
