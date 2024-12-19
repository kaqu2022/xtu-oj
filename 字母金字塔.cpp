#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	int ch = 65;//每行初始从A开始 
	int length = c-'A';
	for(int j = 0;j<=length;j++)//行数 
	{
		for(int i = length;i>j;i--)
		 printf(" ");
		for(int i = 0;i<=j;i++)
			printf("%c",ch++); 
		ch--;
		for(int i = 0;i<j;i++)
		 printf("%c",--ch); 
		printf("\n");
	}
	
}
