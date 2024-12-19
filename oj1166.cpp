#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	int arr[1010];
	while(scanf("%d",&n)&&n)
	{
		memset(arr,0,sizeof(arr));
		int count = 0;
		for(int i = 0;i<n;i++)
		 scanf("%d",&arr[i]);
		for(int i = 0; i<n-1;i++)
		{
			for(int j = i+1;j<n;j++)
			{
				if(arr[i]>arr[j])
				 count++;
			}
		}
		printf("%d\n",count);
	}
}
