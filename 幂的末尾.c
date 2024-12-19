#include <stdio.h>
int main ()
{
	int a,b,i,m=1;
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	{
		m=a*m;
	}
	 m=m%1000;
     if(m<10)
      printf("00%d\n",m);
     else if(m>=10&&m<100)
      printf("0%d\n",m);
     else
      printf("%d\n",m);
	return 0;
}
