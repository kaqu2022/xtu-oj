#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main ()
{
	int y,n,count,i;
	int str[4];
	scanf("%d%d",&y,&n);
	for(i=y;i<3020;i++)
	{
		count = 1;
		str[0]=i/1000;
		str[1]=i/100%10;
		str[2]=i/10%10;
		str[3]=i%10;
		if(str[0]!=str[1]&&str[0]!=str[2]&&str[0]!=str[3])
		 count++;
		if(str[1]!=str[2]&&str[1]!=str[3])
		 count++;
		if(str[2]!=str[3])
		 count++;
		if(count==n)
		 break;
	}
	printf("%d %04d",i-y,i);
	system("pause");
	return 0;
}
