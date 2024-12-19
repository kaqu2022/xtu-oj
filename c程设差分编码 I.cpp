#include<stdio.h>
#include <string.h>
int main()
{
	int num[100];
	int t,n,s,sum,count,flag;
	scanf("%d",&t);
    for(int j = 0;j<t;j++)//案例数 
	{	
		memset(num,0,sizeof(num));
		sum = 8;
		count = 0;
		scanf("%d",&n);
		for(int i = 0;i<n;i++)
		{
			flag = 0;
			scanf("%d",&s);
			int t ;
			if(i!=0)
			  {
			  	num[i] = s-t;
			  	for(int k = 0;k<i;k++)
			  	{
			  		if(num[k]==s-t)
			  		{
			  			flag = 1;
			  			break;
					}	
				  }
				if(flag == 0)
				   count++;
				  
			  }
			else
			 num[i] = s; 
			t = s;//记录上一个 
		}
		sum+=count*2;
		printf("24 %d\n",sum);
	
	}
}
