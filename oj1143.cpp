#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		char a[200],b[200];
		scanf("%s",a);
		scanf("%s",b);
		int i = 0;
		for(int j = 0;j<strlen(a);j++)//±éÀú×Ö·û´®a 
		{
			if(a[j]==b[i])
			 i++;
		}
		printf("%d\n",i);
		if(i==strlen(b))
		 printf("Yes\n");
		else
		 printf("No\n");
	}
}
