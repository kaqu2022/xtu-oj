#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	int ch = 65;//ÿ�г�ʼ��A��ʼ 
	int length = c-'A';
	for(int j = 0;j<=length;j++)//���� 
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
