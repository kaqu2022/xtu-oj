#include<stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int n,flag = 1;//��־Ϊ��Ͼ���� 
		scanf("%d",&n);
		int t = n,w = 1;
		while(t=t/10)//�õ�ȥ�����λ�ĵĳ��� 
		{
			w*=10;
		}
		for(int i = w*10;i>=10;i/=10)
		{
			int temp = n%i;
			if(temp/(i/10)==0)//��ǰ��0 
			 {
			 	flag = 0;
			 	printf("No\n");
			 	break;
			 }
			 if(temp==1)
			 {
			 	flag = 0;
			 	printf("No\n");
			 	break;
			 }
			for(int j = 2;j*j<=temp;j++)
			{
				if(temp%j==0)//������ 
				{
					flag = 0;
					printf("No\n");
					break;
				}
			}
			if(flag == 0)
			 break;
		}
		if(flag==1)
		 printf("Yes\n");
	}
	return 0;
}
