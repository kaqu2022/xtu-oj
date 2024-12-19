#include<stdio.h>
int main()//模拟手算加法对其位数相加 
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int a, b,sum = 0,w = 1;
		scanf("%d %d",&a,&b);
		int cnt1 = 0,cnt2 = 0;
		int c[10] = {0},d[10]={0};
		while(a)//将数字存入整数数组中 
		{
			c[cnt1] = a%10;
			a/=10;
			cnt1++;
		}
		while(b)
		{
			d[cnt2] = b%10;
			b/=10;
			cnt2++;
		}
		int max = cnt1>cnt2? cnt1:cnt2;
		for(int k = 0;k<max;k++)
		{
			sum+=((c[k]+d[k])%10)*w;
			w*=10;
		}
	
		printf("%d\n",sum);
	}
	return 0;
}
