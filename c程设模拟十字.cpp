#include<stdio.h>
int main()
{
	char ch;
	while(scanf("%c",&ch)!=EOF,getchar())
	{
		int n = ch-'A'+1;
		int x,y;
		//printf("%d",n);
		for(int i = 1;i<=4*n-1;i++)//�� 
		{
			if(i>=2*n)//ʵ�ֶԳ���� 
			{
				 x = 4*n-i;
			}
			else
			 x = i;
			if(x<=n)
			{
				for(int j = 1;j<=n;j++)//�ո� 
				{
					printf(" ");
				}
				int k = x <=n? x:n;//��x����ĸ������ 
				for(int j = 1;j<=2*n-1;j++)//��ĸ����ͬһ���й��ڵ�n����ĸ�Գ� 
				{
					if(j>n)//ʵ�ֶԳ���� 
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
				for(int j = 1;j<=4*n-1;j++)//��ĸ����ͬһ���й��ڵ�n����ĸ�Գ� 
				{
					if(j>=2*n)//ʵ�ֶԳ���� 
					{
						y = 4*n-j;
					}
					else//һ����ĸ���n+1�� 
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
