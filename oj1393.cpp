#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		int s[100] = {0};
		scanf("%d",&n);
		for(int i = 0;i<n;i++)
		 scanf("%d",&s[i]);
		for(int i = 0;i<n-1;i++)//冒泡排序从小到大 
		{
			for(int j = i+1;j<n;j++)
			{
				if(s[i]>s[j])
				{
					int t = s[j];
					s[j] = s[i];
					s[i] = t;
				}
			}
		}
		int count = 0;
		for(int i = 0;i<n-2;i++)
		{
			for(int j = i+1;j<n-1;j++)
			{
				for(int k = j+1;k<n;k++)
				{
					if((s[i]+s[j]>s[k])&&((s[i]*s[i]+s[j]*s[j])>(s[k]*s[k])))//&&(s[i]*s[i]+s[j]*s[j]<s[k]*s[k])
					{
						count++;
					}
					 
				}
			}
		}
		printf("%d\n",count);
	}
}
