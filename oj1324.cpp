#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int n;
		int num[100],f[10000];//f[]��¼ȡ�������Ƿ���ֹ� 
		scanf("%d",&n);
		int max = 0;
		for(int i = 0;i<n;i++)
		{
			scanf("%d",&num[i]);
			if(num[i]>max)
			 max = num[i];
		}
		printf("%d\n",max);
		for(int j = 2;j<=2*max;j++)//��m 
		{
			memset(f,0,sizeof(f));//ÿ��������mʱ��0 
			int flag = 1;
			for(int k = 0;k<n;k++)//�������� 
			{
				if(f[num[k]%j] == 0)
					f[num[k]%j] = 1;
				else
				 {
				 	flag =  0;//��־�ظ� 
				 	break;
				 }
			}
			if(flag == 1)
			 {
			 	printf("%d\n",j);
			 	break;
			 }
		}
	}
}
