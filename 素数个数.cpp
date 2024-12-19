#include <stdio.h>
#include <math.h>
int main ()
{
	int k,count=0,t;
	scanf("%d",&k);
	while(k--)
	{
		int a, b, i,j;
		scanf("%d %d",&a,&b);
		if(a>b)
		{
			t = a;
			a = b;
			b = t;
		}
		int m[b-a+1];
		for(i=0;i<=b-a;i++)
		{
			m[i]=a+i;
			if(m[i]==1||m[i]==2)
			 count++;
			else
			{
				for(j=2;i<sqrt(m[i]);j++)
				{
					if(m[i]%j==0)
					{
						count++;
						break;
					}
				}
		    }
		}
		printf("%d\n",count);
	}
	return 0;
}
