#include<stdio.h>
int yanhui[35][35];
void fuction()
{
	for(int i = 0;i<35;i++)
	 yanhui[i][0] = yanhui[i][i] = 1;
	for(int j = 2;j<35;j++)
	{
		for(int k = 1;k<j;k++)
		{
			yanhui[j][k] = yanhui[j-1][k-1]+yanhui[j-1][k];
		}
	}
}
int main()
{
	fuction();
//	for(int i = 0;i<35;i++)
//	{
//		for(int j = 0;j<=i;j++)
//		 printf("%d",yanhui[i][j]);
//		printf("\n");
//	}
	int n;
	while(scanf("%d",&n)&&(n>=0))
	{
		printf("2^%d=",n);
		for(int i = 0;i<n;i++)
		{
			 printf("%d+",yanhui[n][i]);
		} 
		printf("%d\n",yanhui[n][n]);
	}
	return 0;
}
