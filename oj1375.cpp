#include<stdio.h>
int main()
{
	int f[105];
	f[1] = 1;
	f[2] = 2;
	for(int i = 3;i<=100;i++)
	{
		f[i] = f[i-1]+f[i-2];
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,count = 0;
		scanf("%d",&n);
		for(int i = 1;i<=100;i++)
		{
			for(int j = i;j<=100;j++)//从小到大避免从重复 
			{
				for(int k = j;k<=100;k++)
				{
					if(f[i]+f[j]+f[k]==n)
					{
						count++;
					}
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
