#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[100],b[100];
		scanf("%s",a);
		scanf("%s",b);
	    int len1 = strlen(a) ;
		int len = strlen(b);
		int flag = 1;//标志可以找到 
		int f = 0;
		for(int j = 0;j<len1;j++)//遍历字符串a 
		{
			int i = 0;//在a中找字符串b的首字母 
			if(a[j]==b[i])
			{
				for(int i = 1;i<len;i++)
				{
					if(a[(j+i)%len1]!=b[i])//顺时针 
					{
						 flag = 0;
						 break;
					}
				}
				if(flag==1)
				{
					printf("Yes\n");
					f = 1;
					break;
				}
				else
				  flag = 1;//恢复 
				for(int i = 1;i<len;i++)
				{
					if(a[(j-i+len1)%len1]!=b[i])//逆时针 
					{
						 flag = 0;
						 break;
					}
				}
				if(flag==1)
				{
					printf("Yes\n");
					f = 1;
					break;
				}
				else
				 flag = 1;//恢复 
			}	
		}
		if(f!=1)
			printf("No\n");
	}
}

