#include<stdio.h>
#include<string.h>
#include<stdlib.h>
const int MAX = 10e6;
int prime[MAX];
int isprime[MAX];
char s[10];
int book[10][MAX];
int cnt = 0,count = 1;
void b()
{
	int len = strlen(s);
		for(int j = 0;j<len;j++)//�����ַ��� 
		{
			k = s[j]-'0';
			book[k][count] = 1;//�������ַ���countλ�ó��ֵĴ��� 
			for(int k = 0;k<+9;k++)//ǰ׺�� 
			{
				book[j][count]+=book[j][count-1];
			}
			count++:
		}
}
void p()
{
	memset(prime,1,sizeof(prime));
	prime[0] = prime[1] = 0;
	for(int i = 2;i<MAX;i++)//�����õ�ȫ����������ת��Ϊ�ַ��� 
	{
		if(prime[i]!=0)//ŷ��ɸ�� 
		 isprime[cnt++];
		for(int j = 0;j<cnt;j++)
		{
			prime[i*isprime[j]] = 0;
			if(i%isprime[j]==0) break; 
		}
		sprintf(s,"%d",i);//������ת��Ϊ�ַ���
		
		if(count>MAX)
		 break;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int l,r,d;
		scanf("%d%d%d",&l,&r,&d);
		p();
		printf("%d\n",book[d][r]);
	}
}
