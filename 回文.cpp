#include <stdio.h>
int main ()
{
	int input, i, j;
	int a[100];
	scanf("%d", &input);
	for(i = 0;input>0;i++)
	{
		a[i] = input % 10;
		input = input/10;
	}
	for(j=0;j<i/2;j++)
	{
		if(a[j]!=a[i-j-1])
		 break;
	}
    j==i/2?printf("true\n"):printf("false\n");
	
	return 0;
}                      
