#include <stdio.h>
#include <math.h>
int main ()
{
	int N, a, b, c, d, x1, x2, x3, y1, y2, y3;
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
		a = abs(x2-x1);
		b = abs(y2-y1);
		c = abs(x3-x2);
		d = abs(y3-y2);
		if(a*d==b*c)
		 printf("Yes\n");
	    else 
	     printf("No\n");
	}
	return 0;
}
15/03/23 19:27

