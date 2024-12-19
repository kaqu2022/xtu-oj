#include<stdio.h>
#include<math.h>
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int n, i;
		scanf("%d",&n);
		int flag = 0 ;//标志无因数或因数非质数 
		for(i = 2;i*i<n;i++)//找第一个因数p; 先出现的是质数，能被其相应倍数整除就一定可以被前面的质数整除 
		{
			if(n%i==0)
			{
				flag = 1;
				int p = n/i;//第二个因数 
				for(int j  =2;j*j<=p;j++)//判断第二个数是否为质数 
				{
					if(p%j==0)
					{
						flag = 0;
						break;
					}
				}
			 break;
			}
		}
		if(flag==0)
		  printf("No\n");
		else
		 printf("Yes\n");
	}
}
