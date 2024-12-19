#include <stdio.h>
int main ()
{
	int k, x, y, m, t, flag;
	scanf("%d", &k);
	while(k--)
	{
		flag = 0;     //flag的赋值放在里面。 
		scanf("%d%d", &x, &y);
		if(x<y)
		{
			t = x;
			x = y;
			y = t;
		}
		for(m=(x-y+1);m<(x+y);m++)
		{
			if((x*x==y*y+m*m)||(m*m==x*x+y*y))
			 {
			 	printf("%d\n",m);
			 	flag = 1;
			 	break;
			 }
		}
		if(flag==0)
	 {
	     printf("None\n");
     }
	}
    return 0;
 } 
