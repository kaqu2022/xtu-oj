#include <stdio.h>
int main ()
{
	int n,k,l,i,flag;
	char a[205];
	scanf("%d",&n);
	while(n--)
	{
		flag = 1;
		scanf("%s",a);
		scanf("%d%d",&k,&l);
		for(i=0;i<l;i++)
		{
			if(a[k-1+i]!=a[k+l-2-i])
			{
				flag = 0;
				break;
			}	
		}
		if(flag==0)
		 printf("No\n");
		else
		 printf("Yes\n");
	}
	return 0;
}
