#include<bits/stdc++.h>

using namespace std;
//dp数组用于记录到n 
int solution(vector<int>&s)
{
	int n = s.size();
	vector<int> dp(n,n);//n个每个初始化为n 
	dp[0] = 0;
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1;j<n&&j<=i+s[i];j++)
		{
			dp[j] = min(dp[j],dp[i]+1);
		}
	}
	return dp[n-1];
 } 
int main()
{
	int a;
	vector<int> s;
	while(cin>>a)
	{
		s.push_back(a);
	}
	cout<<solution(s)<<endl;
	return 0;
}
