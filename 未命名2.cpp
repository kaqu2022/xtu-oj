#include <stdio.h>
int main()
{
	int t;
	int a[100] = {0};
	scanf("%d",&t);
	while(t--)
	{
		int n,num,count,t;
		scanf("%d",&n);
		for(int i = 2;;i++)//������ 
		{
			int flag = 0;//�ٶ����� 
			count = 0;
			int n0 = n; 
			while(n0>0)
			{
				a[count] = n0%i;
				count++;
				n0 = n0/i;
			}
			for(int j = count-1;j>0;j--)//forѭ���ı�����ͬ++--����߽�ֵ 
			{
				if(a[j]<=a[j-1])
				{
					flag = 1;
					break;
				}
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
