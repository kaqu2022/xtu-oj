#include <stdio.h>
#include <string.h>
int main ()
{
	int k,i,l;
	char c[1000];
	scanf("%d",&k);
	while(k--)
	{
		scanf("%s",c);
		l=strlen(c);
		int count1=0,count2=0,count3=0;
		int t;
		for(i=0;i<l;i++)
		{
			if(c[i]=='X')
			 count1++;
			if(c[i]=='T')
			 count2++;
			if(c[i]=='U')
			 count3++; 
		}
		t=count1<count2?count1:count2;
		t=t<count3?t:count3;
		printf("%d\n",t);
	}
}
