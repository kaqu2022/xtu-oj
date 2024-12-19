#include <stdio.h>
#include <string.h>
char c[10000];//定义在主函数外有更大的内存。 
int main ()
{
	int l,i,n=0,m=0,j=0,k=0;
	scanf("%s",c);
	l=strlen(c);
	for(i=0;i<l;i++)
	{
		if(c[i]=='g'||c[i]=='G')
		 n++;
		if(c[i]=='p'||c[i]=='P')
		 m++;
		if(c[i]=='l'||c[i]=='L')
		 j++;
		if(c[i]=='t'||c[i]=='T')
		 k++; 
	}
	while(n!=0||m!=0||j!=0||k!=0)
	{
		if(n!=0)
		{
			printf("%c",'G');
			n--;
		}
		if(m!=0) 
		{
			printf("%c",'P');
			m--;
		}
		if(j!=0)
		{
			printf("%c",'L');
			j--;
		}
		if(k!=0)
		{
			printf("%c",'T');
			k--;
		}
	}
	printf("\n");
	return 0;
}
