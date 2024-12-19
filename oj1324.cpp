#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int n;
		int num[100],f[10000];//f[]记录取余后的数是否出现过 
		scanf("%d",&n);
		int max = 0;
		for(int i = 0;i<n;i++)
		{
			scanf("%d",&num[i]);
			if(num[i]>max)
			 max = num[i];
		}
		printf("%d\n",max);
		for(int j = 2;j<=2*max;j++)//求m 
		{
			memset(f,0,sizeof(f));//每次重新找m时置0 
			int flag = 1;
			for(int k = 0;k<n;k++)//遍历数组 
			{
				if(f[num[k]%j] == 0)
					f[num[k]%j] = 1;
				else
				 {
				 	flag =  0;//标志重复 
				 	break;
				 }
			}
			if(flag == 1)
			 {
			 	printf("%d\n",j);
			 	break;
			 }
		}
	}
}
