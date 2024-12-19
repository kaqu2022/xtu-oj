#include<stdio.h>
int main()
{
	char c[2];
	while(scanf("%s",c)&&(c[0]!='#'))
	{
		int n = c[0]-'A'+1;//c[0]-64;
		//printf("%d\n",n);
		for(int i = 1;i<=n;i++)//上半部分行数 
		{
			int t = 64+i;
			for(int j = 1;j<=n;j++)//前半部分 
			{
		//i与n; 
				if(j<=i)
				 printf("%c",t);
				else
				 printf("%c",++t);
			}	
			for(int j = n-1;j>=1;j--)//后半部分 
			{
				if(j<i)
				 printf("%c",t);
				else
				 printf("%c",--t);
			}	
            printf("\n");
		}
		for(int i = n-1;i>=1;i--)//下半部分行数 
		{
			int t = 64+i;
			for(int j = 1;j<=n;j++)//前半部分 
			{
				if(j<=i)
				 printf("%c",t);
				else
				 printf("%c",++t);
			}	
			for(int j = n-1;j>=1;j--)//后半部分 
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
