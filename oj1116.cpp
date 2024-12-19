#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	while(scanf("%d",&a)&&a)
	{
		int sum = 0,cnt = 0;
		int b[10] = {0}; 
		int t = a;
		while(t)
		{
			b[cnt] = t%10;
			t/=10;
			cnt++;
		}
		for(int i = 0;i<cnt;i++)
		{
			sum+=pow(b[i],cnt);
		}
		printf("%d\n",sum);
		if(sum==a)
		 printf("Yes\n");
		else
		 printf("No\n");
	
	}
}
