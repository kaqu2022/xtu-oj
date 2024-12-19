#include <stdio.h>
int main ()
{
	int m, x, y;
	while(scanf("%d %d",&x,&y)&&x!=0&&y!=0) 
	{
		while(m!=0)
	    {
		  m = x%y;
		  x = y;
		  y = m; 
	    }
	    printf("%d\n", x*y/m);
	}
	return 0;
}
