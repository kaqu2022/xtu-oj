#include <stdio.h>
#include <string.h>
#include <math.h>
int change(int n,char str[])
{
	int i,sum,f,a;
	i = 0;
	f = 1;
	sum = 0;
	if(str[0]=='-')
	{
		i = 1;
		f = -1;
	}
	for(;i<strlen(str);i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			a = str[i]-'0';
		}
		else if(str[i]>='A'&&str[i]<='Z')
		{
			a = str[i]-'A'+10;
		}
		else
		{
		    a = str[i]-'a'+36;
	    }
		sum = sum*n + a;
	}
	return sum*f;
}
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int n, m, x, y;
		char a[35]={0},b[35]={0};
		scanf("%s %d %s %d",a,&n,b,&m);
		x = change(n,a);
		y = change(m,b);
		printf("%d\n",x+y);
	}
	return 0;
}
