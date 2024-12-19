
#include<bits\stdc++.h>
using namespace std;
int m, t,maxi;
int a[10005];
bool success(int mid)
{
	int count = 0;//当前花费的时间 
	for(int i = 1;i<=m;i++)
	{
		count += ceil(a[i]*1.0/mid);//(a[i]+mid-1)/mid
	}
	return count<=t;
}
int main()
{
	scanf("%d",&m);
	scanf("%d",&t);
	for(int i = 1;i<=m;i++)
	{
		scanf("%d",&a[i]);
		maxi = max(maxi,a[i]);
	}
	int right = maxi;
	int left = 1;
	while(left<right)
	{
		int mid = (left + right)/2;
		if(success(mid))
		{
			right = mid - 1;
		}
		else
		 left = mid + 1;
	}
	printf("%d\n",left);
	return 0;
}
