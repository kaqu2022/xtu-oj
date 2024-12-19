#include<stdio.h>
int main()
{
	char c;
	while(scanf("%c",&c))
	{
		getchar();//连续输字符串要消去回车 
		int n = c-'A'+ 1;//c-64;
		printf("%d\n",n);
		for(int i = 1;i<=2*n;i++)//总层数 
		{
			int ch = 65;//A;
			for(int j = 2*n;j>i;j--)//空格数 
			{
				printf(" ");
			}
			for(int j = 0;j<i%n;j++)
			 printf("%c",ch++);
			ch--;
			for(int j = 1;j<i%n;j++)
			 printf("%c",--ch);	
		}
	}
	return 0;
	
}
