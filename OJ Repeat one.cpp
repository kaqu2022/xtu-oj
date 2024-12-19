#include <stdio.h>
int main ()
{
	int k,i,m;
	scanf("%d",&k);
	while(k--)
	{
		int n=1,num=1;
		scanf("%d",&m);
		i = m;
		while(i--)
		{
			n = n%m;
			if(n==0)
			 break;
			else
			{
				n = n*10 + 1;
				num++;
			}
		}
		if(n==0)
		{
			printf("%d\n",num);
		}
		else
		 printf("0\n");
	}
	return 0;
}
