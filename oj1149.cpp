#include<stdio.h>
int main()
{
	int a, c, m;
	while(scanf("%d %d %d", &a, &c, &m)!=EOF)
	{
		int v[10005] = {0};//����Ƿ���� 
		int x = 0;//����ֵ 
		int cishu = m,i = 0,flag = 1;
		while(cishu--)
		{
			x = (a*x+c)%m;
		//	printf("%d\n",x);
			v[x] = 1;//��ǳ��� 
		}
		for(int j = 0;j<m;j++)
		{
			if(v[j]==0)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 0)
		 printf("No\n");
		else
		 printf("Yes\n");
	}
}
