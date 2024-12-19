#include <stdio.h>
int main ()
{
	int n, a[1000], sum=0, i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    {
			scanf("%d\t",&a[i]);
			sum = sum +a[i];
		}        
	printf("%d", sum);	
	
	return 0;
}
