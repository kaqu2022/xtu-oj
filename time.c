#include <stdio.h>
int main ()
{
	int T, i, n, hour, minute, second;
	
	scanf("%d",&T);
    for (i=0;i<T;i++)
    {
    	scanf("%d",&n);
	    hour = n / 3600;
        minute = (n-hour*3600)/60;
	    second = n % 60;
	    printf("%02d:%02d:%02d\n",hour,minute,second);
	}
	
	return 0;
}
