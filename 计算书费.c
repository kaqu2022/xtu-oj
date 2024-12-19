#include <stdio.h>
int main ()
{
	float a[10]={28.9,32.7,45,78,35,86.2,27.8,43,56,65};
	int b[10];
	int i;
	float sum=0;
	for(i=0;i<10;i++)
	 scanf("%d",&b[i]);
	for(i=0;i<10;i++)
	{
		sum=sum+a[i]*b[i];
	}
	printf("%.2f\n",sum);
	return 0;
}
