#include<stdio.h>
#include<string.h>
int	prime[100];
void isprime()//ɸ�������ı�������������ż���������� 
{
	memset(prime,1,sizeof(prime));//����־Ϊ���� 
	prime[0] = prime[1] = 0;
	for(int i = 2;i<100;i++)
	{
		for(int j = 2*i;j<100;j+=i)
		{
			prime[j] = 0;//������ 
		 } 
		for(i++;!prime[i];i++);//�ҵ���Ӧ����
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
