#include<iostream>
#include<algorithm>
using namespace std;

const int N = 110;
int a[N];
int main()
{
	int t,count;
	
	scanf("%d",&t);
	while(t--)
	{
		
		int n;
		scanf("%d",&n);
		for(int i = 0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		count = 0;
		for(int i = 0;i<n;i++)
		{
			for(int j = i+1;j<n;j++)
			{
				for(int k = j+1;k<n;k++)
				{
					if((a[i]+a[j]>a[k])&&(a[i]*a[i]+a[j]*a[j]>a[k]*a[k]))
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
