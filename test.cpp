#include<stdio.h>
#include<string.h>
int	prime[100];
void isprime()//筛法质数的倍数不是质数，偶数不是质数 
{
	memset(prime,1,sizeof(prime));//均标志为素数 
	prime[0] = prime[1] = 0;
	for(int i = 2;i<100;i++)
	{
		for(int j = 2*i;j<100;j+=i)
		{
			prime[j] = 0;//非素数 
		 } 
		for(i++;!prime[i];i++);//找到对应素数
	}
}
int  main()
{
	isprime();
	for(int i = 0;i<100;i++)
	{
		if(prime[i])
		 printf("%d ",i);
	 } 
}
