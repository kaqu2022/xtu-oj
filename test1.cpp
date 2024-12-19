#include<stdio.h>
#include<string.h>
//用欧拉筛输出1-n的素数 
const int MAX = 100;
int isprime[MAX];
int prime[MAX];
int main()
{
	int n,count = 0;
	scanf("%d",&n);
	memset(isprime,1,sizeof(isprime));//初始均设为1都标志为素数;
	isprime[0] = isprime[1] = 0;
	for(int i = 2;i<=n;i++)//遍历区间里的各数 
	{
		if(isprime[i])//未被筛掉为素数 
		{
		prime[count++] = i;//存入素数表中 
		}
		for(int j =0;j<count && i*prime[j]<=n;j++)//将素数分别与素数表相乘划去合数 
		{
			isprime[i*prime[j]] = 0;
			if(i%prime[j]==0)
			 break;//保证不重复筛为线性 
		}
	}
	for(int i = 0;i<count;i++)
	{
		printf("%d ",prime[i]);
	}
}
