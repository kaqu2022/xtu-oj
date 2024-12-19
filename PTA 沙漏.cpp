#include <stdio.h>
int main ()
{
	int row=1,n,i,m;
	char c;
	scanf("%d %c",&n,&c);
	n--;
	while(n>=2*(row+2))
	{
		n-=2*(row+2);
		row = row + 2;
	}
	int star_num = row;
	for(i=1;i<=row;i++)
	{
		if(i<row/2)
		{
			for(m=0;m<i-1;m++)
			{
				printf(" ");
			 } 
			for(m=1;m<star_num+1;m++)
			{
				printf("%c",c);
			}
			star_num-=2; 
		}
		else
		{
			for(m=0;m<row-i;m++)
			 printf(" ");
			for(m=1;m<star_num+1;m++)
			 printf("%c",c);
			star_num+=2;
		}
		printf("\n");
	}
	printf("%d\n",n);
	return 0;
}
