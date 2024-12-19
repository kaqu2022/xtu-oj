#include <stdio.h>
#include <math.h>
int main ()
{
	unsigned  int n;
	while(scanf("%d",&n)&&n!=0)
	{
		int i,flag=1; 
		if(n<=1)
		{
			printf("No\n");
		}
		else
		{
		    for(i=2;i<=sqrt(n);i++)
		   {   
			   if(n%i==0)
			  {
				 flag=0;
				 break;
	          }
		    }
		    if(flag==0)
		        printf("No\n");
            else
	            printf("Yes\n");
	    }
		
	}
	return 0;
}
