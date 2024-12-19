#include<stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	int a[12];
	while(k--)
	{
		double sum = 1;//ºŸ…Ë≥ı º«Æ1 
		for(int i = 0; i < 12; i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i = 0; i < 12; i++)
		{
			sum *= (1+(a[i]/100.0));
		//	printf("%lf\n",sum);
		}
		printf("%.3lf\n",(sum-1)*100);
	}
}
