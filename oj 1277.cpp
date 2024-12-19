#include<stdio.h>
int main()
{
	char c[2];
	while(scanf("%s",c)!=EOF)
	{
		int length = c[0] - 'A';
	//	printf("%d\n",length);
		int ch;
		for(int i = 0; i<=length; i++)//上半部分 
		{
			ch = 65;
			for(int j = 2*length;j>=i;j--)//空格 
			 printf(" ");
			for(int j = 0;j<=i;j++)//升序 
			 printf("%c",ch++);
			ch--;
			for(int j = 0;j<i;j++)//降序 
			 printf("%c",--ch);
			printf("\n"); 
		}
		
		for(int i = 0; i<=length; i++)//下半部分层数 
		{
			ch = 65; 
			for(int j = length;j>i;j--)
			 printf(" ");
			for(int j = 0;j<=i;j++)
			 printf("%c",ch++);
			ch--;
			for(int j = 0;j<i;j++) 
			 printf("%c",--ch);
			for(int j  = 0;j<2*length+1-2*i;j++)
			 printf(" ");
			ch = 65;
			for(int j = 0;j<=i;j++)
			 printf("%c",ch++);
			ch--;
			for(int j = 0;j<i;j++) 
			 printf("%c",--ch);
			printf("\n");
		}
	}
}
