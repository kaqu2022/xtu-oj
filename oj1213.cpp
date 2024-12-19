#include<stdio.h>
int f(int a, int b)
{
	int c = a%b;
	while(c)
	{
		a = b;
		b = c;
		c = a%b;
	}
	return b;
}
int main()
{
	int k, n, m, fenzi, fenmu;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d %d", &n, &m);
		if(m<3)
		 printf("0\n");
		else if(n == m)
		 printf("1\n");
		else
		{
			fenzi = m*(m-1)*(m-2);
			fenmu = n*(n-1)*(n-2);
			//printf("%d/%d\n",fenzi,fenmu);
			int a = f(fenzi, fenmu);
			printf("%d/%d\n",fenzi/a,fenmu/a);
		}
	}
}
