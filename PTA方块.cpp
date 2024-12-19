#include <stdio.h>
int main ()
{
	int N,i,j;
	char c;
	scanf("%d %c",&N,&c);
	for(i=1;i<=N/2;i++) 
	{
		for(j=1;j<=N;j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}
