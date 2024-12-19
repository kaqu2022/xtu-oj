#include <stdio.h>
#include <string.h>
#include <math.h>
int shift(char str)
{
	int num;
	if(str>'0'&&str<'9')
	{
		num = str - 48;
	}
	if(str>'A'&&str<'F')
	{
		num = str -55;
	}
	return num;
}
int max(int num[],int len)
{
	int i,m;
	m = num[0];
	for(i=0;i<len;i++)
	{
		if(num[i]>m)
		{
			m = num[i];
		}
	}
	return m;
}
int main ()
{
	char str[31];
	int num[31],m,n,sum,flag,i,len,j,k;
	while(scanf("%s",str)!=EOF)
	{
		sum = 0;flag = 0;
		scanf("%d",&n);
		len = strlen(str);
		for(i=0;i<len;i++)
		 num[i]=shift(str[i]);
		m = max(num,len);
		for(i=m+1;i<=16;i++)
		{
			for(j=len-1,k=0;j>=0;j--,k++)
			{
				sum+=num[j]*pow(i,k);
			}
			if(sum==n)
			{
				flag=1;
				break;
			}
			else
			{
				sum = 0;
				continue;
			}
		}
		if(flag==1)
		 printf("%d",i);
		else
		 printf("Imposible\n");	
	}
}
