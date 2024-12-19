#include<stdio.h>
int gcd(int a,int b)
{
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
		int a, b;
		scanf("%d %d",&a,&b);
		int fenzi = 2*a*b*b+2*a*a*a+a*a*b+b*b*b;
		int fenmu = 2*a+2*b;
		if(fenzi%fenmu==0)
		 printf("%d\n",fenzi/fenmu);
		else
		 printf("%d/%d\n",fenzi/gcd(fenzi,fenmu),fenmu/gcd(fenzi,fenmu));
	}
}
