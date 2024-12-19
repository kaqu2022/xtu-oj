#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,num,count,t;
		scanf("%d",&n);
		for(int i = 2;i<=n;i++)//进制数 
		{
			int flag = 0;//假定单调 
			count = 0;
			int n0 = n; 
			while(n0!=0)
			{
				num = n0%i;
				count++;
				if(count!=1&&num<t)//不单调 
				{
					flag = 1;
					continue; 
				}
				n0 = n0/i;
				t = num;//存次数小的位 
			}
			if(flag == 0)
			{
				printf("%d\n",i);
				break;
			}
		}
		
	}
	return 0;
}
