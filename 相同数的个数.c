#include <stdio.h>
int main ()
{
	int N,m,i,count=0; 
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d\t",a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<N;i++)
	{
	  a[i]=m;
	 count++;
    }
    printf("%d\n",count);
	return 0;
}
