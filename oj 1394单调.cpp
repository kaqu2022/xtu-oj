#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,num,count,t;
		scanf("%d",&n);
		for(int i = 2;i<=n;i++)//������ 
		{
			int flag = 0;//�ٶ����� 
			count = 0;
			int n0 = n; 
			while(n0!=0)
			{
				num = n0%i;
				count++;
				if(count!=1&&num<t)//������ 
				{
					flag = 1;
					continue; 
				}
				n0 = n0/i;
				t = num;//�����С��λ 
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
