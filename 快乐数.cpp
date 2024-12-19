#include <stdio.h>
int main ()
{
	int d, n, sum;
	sum = 0;
	scanf("%d", &n);
    while (n==1)
    {
    	while (n>0)
    	{
    	    d = n % 10;
            n = n / 10;
            sum = sum + d*d;
		}
		if (sum == 4)
		 break;
	}
	sum==4?printf("false\n"):printf("true\n");
	
    return 0;
}
