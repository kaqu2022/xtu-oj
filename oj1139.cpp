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
		int flag = 0 ;//��־������������������ 
		for(i = 2;i*i<n;i++)//�ҵ�һ������p; �ȳ��ֵ����������ܱ�����Ӧ����������һ�����Ա�ǰ����������� 
		{
			if(n%i==0)
			{
				flag = 1;
				int p = n/i;//�ڶ������� 
				for(int j  =2;j*j<=p;j++)//�жϵڶ������Ƿ�Ϊ���� 
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
