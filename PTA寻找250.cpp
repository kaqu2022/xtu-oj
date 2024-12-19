#include <stdio.h>
int main ()
{
	int n,count=0;
	do
	{
		scanf("%d",&n);
		count++;
		if(n==250)
		break;
	}
	while(n!=250);
	printf("%d\n",count);
	return 0;
}
