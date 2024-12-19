#include<iostream>
#include<algorithm>
using namespace std;

int day[365], cost[3], n,dp[700];
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &day[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &cost[i]);
	}
	int maxday = day[n - 1];
	int minday = day[0];

	for (int d = maxday, i = n - 1; d >= minday; d--)//´ÓºóÍùÇ° 
	{
		if (d == day[i])
		{
			dp[d] = min(dp[d + 1] + cost[0], dp[d + 7] + cost[1], dp[d + 30] + cost[2]);
		}
		else
			dp[d] = dp[d + 1];
	}
	cout << dp[n-1] << endl;
	return 0;
}
