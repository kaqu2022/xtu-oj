#include<stdio.h>
int main()
{
	int w[18] = {0};
	int card[18] = {0};
	char c[18];
	w[17] = 1;
	for(int i = 16;i>=0;i--)//´Ó×óÏòÓÒ±àºÅ 
	 w[i] = w[i+1]*2;
//	for(int i = 0;i<18;i++)
//	{
//	  printf("%d ",w[i]);
//	}
	int k;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%s",c);
		for(int i = 0;i<17;i++)
		{
			card[i] = c[i]-'0'; 
		}
		if(c[17]=='X')
		 card[17] = 10;
		else
		 card[17] = c[17] -  '0';
		int sum = 0;
		for(int i = 0;i<18;i++)
		{
			sum+=(card[i]*w[i]);
		 } 
		// printf("%d\n",sum);
		 if(sum%11 !=1) printf("No\n");
		 else printf("Yes\n");
	}
}
