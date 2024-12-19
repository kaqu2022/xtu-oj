#include<stdio.h>
#include<string.h>
int arr[50][5] ={0};//长度为n时，数字i出现的次数 
void solve()
{
	arr[1][1] = arr[1][2] = arr[1][3] = arr[1][4] = 1;
	for(int i = 2;i<=45;i++)
	{
		arr[i][1] = arr[i-1][2]+arr[i-1][3];
		arr[i][2] = arr[i-1][1]+arr[i-1][3]+arr[i-1][4];
		arr[i][3] = arr[i-1][1]+arr[i-1][2]+arr[i-1][4];
		arr[i][4] = arr[i-1][3]+arr[i-1][2];
	}
}

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--)
	{
		solve();
		scanf("%d",&n);
		int out = arr[n][1]+arr[n][2]+arr[n][3]+arr[n][4];
		printf("%d\n",out);
	}
}
