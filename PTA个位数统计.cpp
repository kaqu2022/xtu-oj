#include <stdio.h>
#include <string.h>
int main ()
{
	int i,m,count;
	char a[1000],j='0';
	scanf("%s",&a);
	i = strlen(a);
	while(j<='9')
	{
		count = 0;
		for(m=0;m<i;m++)
		{
			if(j==a[m])
			{
				count++;
			}
			
		}
		if(count!=0)
		 printf("%c:%d\n",j,count);
		j++;
	}
	return 0;
}
