#include<stdio.h>
int main()
{
	char c[2];
	while(scanf("%s",c)!=EOF)
	{
		int n = c[0]-64,t = n+64;
		//printf("%d %c\n",n,t);
		for(int i = 0;i<=n;i++)//上半部分 
		{
			for(int j = 0;j<i;j++)
			 printf(" ");
			if(i==n)
			{
				printf("X\n");
			}
			else
			{
				printf("%c",t);
				for(int j = 0;j<(2*n-1-2*i);j++)
				 printf(" ");
				printf("%c\n",t);
			}
			t--;
		}
		t = 65;//从A开始 
		for(int i = 0;i<n;i++)//上半部分 
		{
			for(int j = 1;j<(n-i);j++) printf(" ");
			printf("%c",t);
			for(int j = 0;j<(2*i+1);j++)
			 printf(" ");
			printf("%c\n",t);
			t++;
		}
	}
}
