#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)&&n)
	{
		int a[4];
		int t = n,cnt = 0;
		while(t!=6174)
		{
			int k = 0;
			for(int i = 0;i<4;i++)
			{
				a[k] = t%10;
				t/=10;
				k++;
			}
			for(int i = 0;i<3;i++)//Ã°ÅÝÅÅÐò 
			{
				for(int j = i+1;j<4;j++)
				{
					if(a[i]>a[j])
					{
						int t = a[j];
						a[j] = a[i];
						a[i] = t;
					}
				}
			}
		  t = (a[3]*1000+ a[2]*100+a[1]*10+a[0])-(a[0]*1000+ a[1]*100+a[2]*10+a[3]);
		  cnt++;
		  //printf("%d\n",t);
		}
		printf("%d\n",cnt);
	}
}
