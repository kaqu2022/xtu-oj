#include<stdio.h>
#include<string.h>
int a[100005];
int main()
{
	int n, m;
	while(scanf("%d %d", &n, &m)&&n&&m)
	{
		memset(a,0,sizeof(a));
		int sum = 0,max = 0;
		for(int i = 0;i<n;i++)//���ǰ׺�ͣ�����ͱ��ж��ж����ֵ 
		{
			scanf("%d",&a[i]);
			sum += a[i];
			if(i>=m)
			 sum-=a[i-m];
			if(sum>max)  max = sum;
		}
		printf("%d\n",max);
	}
}
