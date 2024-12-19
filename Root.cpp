#include <stdio.h>
int main ()
{
	int a, b, c;
	int k;
	scanf("%d",&k);
	while(k--)
	{
		scanf("",&a,&b,&c);
		if(a-c*b==0)
		{
			if(a==b&&c==1)
			 printf("0\n");
			else
			 printf("None\n");
		}
		else if(a==b&&c!=1)
		 printf("None\n");
		else
		 printf("%I64d\n",(a-b*c)/(c-1));
	}
	return 0;
}
