#include <stdio.h>
int main ()
{
	char c;
	int i,j,n;
	int a[52][52];
	while(scanf("%c",&c)&&c!='#')
	{
		n = c-65+1;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==1)
				{
					a[i][j]=j;
					a[i][2*n-j]=j;
				}
				if(j<i)
				{
					a[i][j]=i;
					a[i][2*n-j]=i;
				}
				if(i<=j)
				{
					a[i][j]=j;
					a[i][2*n-j]=j;
				}
			}
		}
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=2*n-1;j++)
				{
					printf("%c",a[i][j]+65-1);
				}
				printf("\n");
			}
			for(i=n-1;i>=1;i--)
			{
				for(j=2*n-1;j>=1;j--)
				{
					printf("%c",a[i][j]+65-1);
				}
				printf("\n");
			}
	}
	return 0;
}
