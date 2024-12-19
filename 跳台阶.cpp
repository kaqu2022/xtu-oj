#include<stdio.h>
/*int dfs(int x)
{
	if(x == 0)
	 return 1;
	if(x == 1)
	 return 1;
	if(x == 2)
	 return 2;
	return dfs(x-1)+dfs(x-2)+dfs(x-3);
}
*/
int a[20] = {1,1,2};
int main()
{
	int n;
	scanf("%d",&n);
//	int count = dfs(n);
	for(int i = 3;i<=n;i++)
	{
		a[i] = a[i-1]+a[i-2]+a[i-3];
	}
	printf("%d",a[n]);
	return 0;
}
