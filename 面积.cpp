#include<stdio.h>
int gcd(int fenzi,int fenmu)
{
	int a = fenzi;
	int b = fenmu;
	int c = a%b;
	while(c)
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
	scanf("%d",&t); 
	while(t--)
	{
		int a,b,sum;
		scanf("%d%d",&a,&b);
		int t = (a*b*(b-a))%((a+b)*2);
		int t2 = b*b%2;
		if(t||t2)
		{
			int fenzi,fenmu;
			fenzi = 2*a*a*(a+b)+b*b*(a+b)+a*b*(b-a);
			fenmu = 2*(a+b);
			int t3 = gcd(fenzi,fenmu);
			printf("%d/%d\n",fenzi/t3,fenmu/t3);
		}
		else
		{
			sum = a*a+b*b/2+(a*b*(b-a))/((a+b)*2);
			printf("%d\n",sum);
		}	
	}
	return 0;
}
