#include <stdio.h>
int main ()
{
	int k;
	int a, b, c;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a==0)
		{
			if(b==0&&c==0)
			 printf("INF\n");
			else 
			 printf("1\n");
		}
		else
		{
			int m;
			m = b*b-4*a*c;
			if(m>0)
			 printf("2\n");
			else if(m==0&&b!=0&&c!=0)
			 printf("1\n");
			else
			 printf("0\n");
		}
	}
	return 0;
}
