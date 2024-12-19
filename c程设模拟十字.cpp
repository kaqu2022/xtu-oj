#include<stdio.h>
int main()
{
	char ch;
	while(scanf("%c",&ch)!=EOF,getchar())
	{
		int n = ch-'A'+1;
		int x,y;
		//printf("%d",n);
		for(int i = 1;i<=4*n-1;i++)//行 
		{
			if(i>=2*n)//实现对称输出 
			{
				 x = 4*n-i;
			}
			else
			 x = i;
			if(x<=n)
			{
				for(int j = 1;j<=n;j++)//空格 
				{
					printf(" ");
				}
				int k = x <=n? x:n;//第x的字母种类数 
				for(int j = 1;j<=2*n-1;j++)//字母列数同一行中关于第n个字母对称 
				{
					if(j>n)//实现对称输出 
					{
						y = 2*n-j;
					}
					else
					 y = j;
					if(y<=k)
					 printf("%c",ch-y+1);
					else
					 printf("%c",ch-k+1);	
				}
			}
			else
			{
				int t = x<=2*n? x:2*n;
				for(int j = 1;j<=4*n-1;j++)//字母列数同一行中关于第n个字母对称 
				{
					if(j>=2*n)//实现对称输出 
					{
						y = 4*n-j;
					}
					else//一个字母最多n+1个 
					 y = j;
					if(y>=x-n&&y<=t )
					{
						printf("%c",ch-(i-n)+1);
					}
					 
					else
					{
						if(y>i)
						 printf("%c",ch-y+i);
						else
						 printf("%c",ch-y+1);
					}
					 	
				}
			}
			printf("\n");
		}
	}
}
