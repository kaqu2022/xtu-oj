#include<stdio.h>
#include<string.h>
long long gcd(long long a,long long b)//找公因数 
{
	long long c = a%b;
	while(c)//7 4
	{
		a = b;
		b = c;
		c = a%b;
	}
	return b;
}
int main()
{
	int t;
	int a[100],b[100];
	scanf("%d",&t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		int n;
		scanf("%d",&n);
		for(int i = 0;i<n;i++)
		 scanf("%d",&a[i]);
		for(int i = 0;i<n;i++)
		 scanf("%d",&b[i]); 
		long long fenzi = b[n-1];//从最后一层开始 
		long long fenmu = a[n-1];
		for(int i = n-2;i>=0;i--)
		{
			long long temp = fenmu;
			fenmu = a[i]*temp+fenzi;
			fenzi = b[i]*temp;
			//printf("%I64d %I64d\n",fenzi,fenmu);
		}
		if(fenzi%fenmu==0)//可以整除 
		 printf("%I64d\n",fenzi/fenmu);
		else
		{
			long long g = gcd(fenzi,fenmu);
			printf("%I64d/%I64d\n",fenzi/g,fenmu/g);
		}
		 
	}
}
