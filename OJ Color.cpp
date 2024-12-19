#include <stdio.h>
#include <string.h>
int main ()
{
	int t,n,m,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&m,&n,&k);
		int a[m+1],b[n+1];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		int i;
	    int x[k],y[k];
	    for(i=0;i<k;i++)
	    {
	    	scanf("%d%d",&x[i],&y[i]);
	    	a[x[i]]=1;
	    	b[y[i]]=1;
		}
		int countx=0,county=0;
		for(i=1;i<=m;i++)
		{
			if(a[i]==0)
			 countx++;
		}
		int s;
		s = countx*n;
		for(i=1;i<=n;i++)
		{
			if(b[i]==0)
			 county++;
		}
		s = s+county*m-countx*county;
		printf("%d\n",s);
	}
	return 0;
}
