#include <stdio.h>
int main ()
{
	int k, n, i, y, sum, flag;
	scanf("%d",&k);
	while(k--)
	{
	    flag=0;
		scanf("%d",&n);
		for(i=1;i<81;i++)
		{
			y = n-i;
			if(y-i>=0)
			{
				sum = n-i;
				while(y)
				{
					sum = sum+y%10;
					y = y/10;
				}
				if(n==sum)
				{
					flag = 1;
					break;
				}
		    }
		    else
		     break;
			
		}
		if(flag==0)
		 printf("Yes\n");
		else
		 printf("No\n");
		
	}
	return 0;
}
