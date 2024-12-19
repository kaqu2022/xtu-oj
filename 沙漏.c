#include <stdio.h>
int main ()
{
	int N, row=1,sum=1,i,n;
	char c;
	scanf("%d %c",&N,&c);
	if(N<7)
    { printf("%c\n",c);
      printf("%d\n",N-1);
    }
	else
	{
	    while(sum<=N)
		{
            row = row+2;
			sum=sum+2*row;
		}
		for(i=1;i<=row;i++)
		{
			if(i<+row/2+1)
			{
				for(n=1;n<i;n++)
				{
					printf(" ");
				}
				for(n=0;n<row-2*(i-1);n++)
				{
					printf("%c",c);
				}
			 } 
			else
			{
				for(n=1;n<=(row-i);n++)
				{
					printf(" ");
				}
				for(n=1;n<=(row-2*(row-i));n++)
				{
					printf("%c",c);
				}
			}
			printf("\n");
	    }
	    if(sum<N)
	     printf("%d\n",N-sum);
    }
	return 0;
}
