#include <stdio.h>
#include <math.h>
int main ()
{
	int x, i, j, m;
	while(scanf("%d",&x)==1)
	{
		int flag=1,count=1;
	    for(i=2;i<sqrt(x);i++)
	    {
		    int m;
		    if(x%i==0)
		    { 
			   flag = 0;
		       while(x%i==0)
			   {
				   count++;
				   x=x/i;
			   }
			    if(count!=1)
			     {
			     	printf("%d",i);
			     	printf("^");
			     	printf("%d",count);
				 }
				break;
			}
		}
		
	    if(j%m!=0)
	     printf("*%d\n",j);
		if(flag==1)
	     printf("%d\n",x);
    }
    return 0;
}
