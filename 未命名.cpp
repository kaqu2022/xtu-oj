#include<bits/stdc++.h>
using namespace std;
int mincost(int day[],int n,int x,int y,int z)
{
	int maxday = day[n-1];
	int j = 0;
	int dp[maxday+1];
	for(int i = 1;i<=maxday;i++)
	{
		if(i!=day[j])
		{
			dp[i] = dp[i-1];
		}
		else
		{
			dp[i] = dp[i-1] + x;
			int k = (i-7)>0? (i-7):0;
			dp[i] = dp[i]<(dp[k]+y)? dp[i]:(dp[k]+y);
			k = (i-30)>0?(i-30):0;
			dp[i] = dp[i]<(dp[k]+z)?dp[i]:(dp[k]+z);
			j++;
		}
	}
	return dp[maxday];
}
int main()
{
	int n,x,y,z;
	cin>>n;
	int day[n];
	for(int i = 0;i<n;i++)
	{
		cin>>day[i];
	}
	cin>>x>>y>>z;
	int result = mincost(day,n,x,y,z);
	printf("%d\n",result);
	return 0;
}
