#include<stdio.h>
#include<string.h>
//��ŷ��ɸ���1-n������ 
const int MAX = 100;
int isprime[MAX];
int prime[MAX];
int main()
{
	int n,count = 0;
	scanf("%d",&n);
	memset(isprime,1,sizeof(isprime));//��ʼ����Ϊ1����־Ϊ����;
	isprime[0] = isprime[1] = 0;
	for(int i = 2;i<=n;i++)//����������ĸ��� 
	{
		if(isprime[i])//δ��ɸ��Ϊ���� 
		{
		prime[count++] = i;//������������ 
		}
		for(int j =0;j<count && i*prime[j]<=n;j++)//�������ֱ�����������˻�ȥ���� 
		{
			isprime[i*prime[j]] = 0;
			if(i%prime[j]==0)
			 break;//��֤���ظ�ɸΪ���� 
		}
	}
	for(int i = 0;i<count;i++)
	{
		printf("%d ",prime[i]);
	}
}
