#include <stdio.h>
int main ()
{
	int t,n,i,j,k;
	scanf("%d",&t);
	while(t--)
	{
		int flag=0;
		scanf("%d",&n);
		double a[105][3];
		for(i=0;i<n;i++)
		{
			scanf("%lf %lf %lf",&a[i][0],&a[i][1],&a[i][2]); 
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					if(1/a[i][0]+1/a[j][1]+1/a[k][2]<1)
					{
						flag = 1;
						printf("Yes\n");
						break;
					}
				}
				if(flag==1)
				 break;
			}
			if(flag==1)
			 break;
		}
	}
	return 0;
}
