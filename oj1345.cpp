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
		for(int j = 0;j<len;j++)//遍历字符串 
		{
			k = s[j]-'0';
			book[k][count] = 1;//数字在字符串count位置出现的次数 
			for(int k = 0;k<+9;k++)//前缀和 
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
	for(int i = 2;i<MAX;i++)//遍历得到全部素数并且转化为字符串 
	{
		if(prime[i]!=0)//欧拉筛法 
		 isprime[cnt++];
		for(int j = 0;j<cnt;j++)
		{
			prime[i*isprime[j]] = 0;
			if(i%isprime[j]==0) break; 
		}
		sprintf(s,"%d",i);//将数字转化为字符串
		
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
