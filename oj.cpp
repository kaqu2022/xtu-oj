#include<stdio.h>
#include<string.h>
int main()
{
	char c[200];
	while(scanf("%s",c)!=EOF)
	{
		int sort = 0,count = 0;
		int w[26] = {0};
		int length = strlen(c); 
		printf("%d\n",length);
		for(int i = 0;i<length;i++)
		{
			if(c[i]==' ')
			 count++;
			if(c[i]>='a')
			{
				if(w[c[i]-'a']==0)
				{
				sort++;
				w[c[i]-'a'] = 1;
				printf("%d:%d ",c[i]-'a',w[c[i]-'a']);
				}
			}
			else if(w[c[i]-'A']==0)
			{
				sort++;
				w[c[i]-'A'] = 1;
				printf("%d:%d ",c[i]-'A',w[c[i]-'A']);
			}
		}
	//	printf("%d %d\n",count,sort);
		if((count<10)&&(sort<=10))
		 printf("Yes\n");
		else
		 printf("No\n");
	}
}
