#include <stdio.h>
#include <math.h>
int main ()
{
	int k,n,m;
	scanf("%d",&k);
	while(k--)
	{
		int a,b,c,d,x1,x2,t,z=1,y;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		x1 = a*d+b*c;
		x2 = a*d-b*c;
		y = b*d;
		if(x1%y==0)
		 printf("%d ",x1/y);
		else
		{
			m = x1;
			n = y;
			while(n!=0)
			{
				t = m%n;
				m = n;
				n = t;	
			}
			printf("%d/%d ",x1/m,y/m);
		}
		y = b*d;
		if(x2<0)
		{
			z = -1;
			x2 = -x2;
		}
		if(x2%y==0)
		{
			printf("%d\n",z*x2/y);
	    }
	    else
	    {
			m = x2;
			n = y;
			while(n!=0)
			{
				t = m%n;
				m = n;
				n = t;
			}
			printf("%d/%d\n",z*x2/m,y/m);	
		}
	}
	return 0;
}
