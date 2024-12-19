#include <stdio.h>
int main ()
{
	int t, x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&x);
		int k1=0,k2=0;
		while(x)
		{
			if(x%2==0)
			 k1++;
		    if(x%2==1)
			 k2++;
		    x = x/2;
		}  
		if(k2>k1)
		{
			printf("%d\n",k2-k1);
		  } 
		else
		 printf("0\n"); 
		
	}
	return 0;
}
