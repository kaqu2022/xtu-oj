#include <stdio.h>
int main ()
{
	int t, a1, b1, c1, a2, b2, c2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
		int i;
		if(a1<b1)
		{
			i = a1;
			a1 = b1;
			b1 = i;
		}
		if(a1<c1)
		{
			i = a1;
			a1 = c1;
			c1 = i;
		}
		if(b1<c1)
		{
			i = b1;
			b1 = c1;
			c1 = i;
		}
		if(a2<b2)
		{
			i = a2;
			a2 = b2;
			b2 = i;
		}
		if(a2<c2)
		{
			i = a2;
			a2 = c2;
			c2 = i;
		}
		if(b2<c2)
		{
			i = b2;
			b2 = c2;
			c2 = i;
		}
		if(a1*b2==a2*b1&&b1*c2==b2*c1)
		 printf("Yes\n");
	    else 
	     printf("No\n");
	}
	return 0;
}
