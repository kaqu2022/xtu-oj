#include <stdio.h>
void swap(int *p,int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}
int main ()
{
	int a,b;
	a = 3;
	b = 5;
	swap(&a,&b);
	printf("%d%d\n",a,b);
	return 0;
}
