#include <stdio.h>
int main ()
{
	int k, m,i,t,j,a[1000];
	char x;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d %c",&m,&x);
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]); 
		 } 
		for(i=0;i<m-1;i++)
		{
			for(j=i+1;j<m;j++)
			{
				if(a[i]>a[j])
				{
					t = a[i];
					a[i] = a[j];
					a[j] = t;
				 } 
			}
		}
		if(x=='A')
		{
			for(i=0;i<m;i++)
			{
				printf("%d",a[i]);
				if(i!=m-1)
				 printf(" "); 
			}
	    }
	    if(x=='D')
		{
			for(i=m-1;i>=0;i--)
			{
				printf("%d",a[i]);
				if(i!=0)
				 printf(" ");
			}
		 } 
		 printf("\n");
	}
	return 0;
}
