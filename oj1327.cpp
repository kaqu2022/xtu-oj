#include<stdio.h>
int main()
{
	char c[2];
	while(scanf("%s",c)&&(c[0]!='#'))
	{
		int n = c[0]-'A'+1;//c[0]-64;
		//printf("%d\n",n);
		for(int i = 1;i<=n;i++)//�ϰ벿������ 
		{
			int t = 64+i;
			for(int j = 1;j<=n;j++)//ǰ�벿�� 
			{
		//i��n; 
				if(j<=i)
				 printf("%c",t);
				else
				 printf("%c",++t);
			}	
			for(int j = n-1;j>=1;j--)//��벿�� 
			{
				if(j<i)
				 printf("%c",t);
				else
				 printf("%c",--t);
			}	
            printf("\n");
		}
		for(int i = n-1;i>=1;i--)//�°벿������ 
		{
			int t = 64+i;
			for(int j = 1;j<=n;j++)//ǰ�벿�� 
			{
				if(j<=i)
				 printf("%c",t);
				else
				 printf("%c",++t);
			}	
			for(int j = n-1;j>=1;j--)//��벿�� 
			{
				if(j<i)
				 printf("%c",t);
				else
				 printf("%c",--t);
			}	
            printf("\n");
		}
	}
	return 0;
}
