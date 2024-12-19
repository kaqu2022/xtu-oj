#include <stdio.h>
int main ()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		float a,b,c,s;
		scanf("%d+%d=%d",&a,&b,&c);
		s = a + b;
		if(s==c)
		 printf("Yes\n");
		else
		 printf("No\n");
	}
	return 0;
}
