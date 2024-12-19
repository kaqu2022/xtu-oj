#include<stdio.h>
int main()
{

	int k;
	scanf("%d",&k);
	while(k--)//案例数 
	{	
		int a[10][10] = {0},b[10][10]={0},result[10][10]={0};
		int n1, m1, n2, m2;
		scanf("%d %d",&n1, &m1);
		for(int i = 0;i<n1;i++)//第一个矩阵 
		{
			for(int j = 0;j<m1;j++)
			 scanf("%d",&a[i][j]);
		}
		scanf("%d %d",&n2, &m2);
		for(int i = 0;i<n2;i++)//第二个矩阵
		{
			for(int j = 0;j<m2;j++)
			 scanf("%d",&b[i][j]);
		}
		for(int i = 0;i<n1;i++)
		{
			for(int j = 0;j<m2;j++)
			{
				int temp = 0;
				for(int k = 0;k<m1;k++)
				 temp += (a[i][k]*b[k][j]);
				result[i][j] = temp;
			}
		}
		for(int i = 0;i<n1;i++)//第二个矩阵
		{
			for(int j = 0;j<m2;j++)
			{
				if(j==0)
				 printf("%d",result[i][j]);
				else
				 printf(" %d",result[i][j]);
			}
			printf("\n");	
		}
	}
	return 0;
}
