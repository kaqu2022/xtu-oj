#include <stdio.h>
int main ()
{
	int N,year,month,date,i;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d-%d-%d",&year,&month,&date);
		if(year%400==0||(year%100!=0&&year%4==0))
		 a[1]=29;
		else
		 a[1]=28;
		int day=0;
		for(i=0;i<month-1;i++)
		{
			day=day+a[i];
		}
		day = day + date;
		printf("%d\n",day);
	}
	return 0;
}
