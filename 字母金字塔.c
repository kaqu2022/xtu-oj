#include <stdio.h>
int main ()
{
	char c;
	while(scanf("%c",&c)&&c!='#')
	{
		int i, j;
		for(i=0;i<=('c'-'A');i++)
		{
			printf("case %d:\n",i);
			while(i)
			{
				printf(" ");
			}
			for(j='A';j<=('c'-i);j++)
			{
				printf("%c",j);
			}
			for(j=('c'-i);j>='A';j--)
			{
				printf("%c\n",j);
			}
		}
	}
	return 0;
}
