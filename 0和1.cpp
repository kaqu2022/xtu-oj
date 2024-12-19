#include <stdio.h>
double fact(int a)
{
	if(a==0)
	{
		return 1;
	}
	return a*fact(a-1);
}
int main ()
{
	int k,n,m,x,y;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d%d",&n,&m);
		double s;
		if((n%2==0&&m%2==1)||(n%2==1&&m%2==0))
		{
			printf("0\n");
		}
		else
		{
			x = (n+m)/2;
			y = (n-m)/2;
			s = fact(n)/(fact(x)*fact(y));
			printf("%.0lf\n",s);
		}
		
	}
	return 0;
}
