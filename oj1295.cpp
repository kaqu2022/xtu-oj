#include<stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int n,flag = 1;//标志为无暇素数 
		scanf("%d",&n);
		int t = n,w = 1;
		while(t=t/10)//得到去除最高位的的除数 
		{
			w*=10;
		}
		for(int i = w*10;i>=10;i/=10)
		{
			int temp = n%i;
			if(temp/(i/10)==0)//有前置0 
			 {
			 	flag = 0;
			 	printf("No\n");
			 	break;
			 }
			 if(temp==1)
			 {
			 	flag = 0;
			 	printf("No\n");
			 	break;
			 }
			for(int j = 2;j*j<=temp;j++)
			{
				if(temp%j==0)//非素数 
				{
					flag = 0;
					printf("No\n");
					break;
				}
			}
			if(flag == 0)
			 break;
		}
		if(flag==1)
		 printf("Yes\n");
	}
	return 0;
}
