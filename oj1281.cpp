#include<stdio.h>
#include<string.h>
int main()
{
	char c[200];
	while(gets(c))//不能用scanf()读取字符串时遇见空格结束 
	{
		int sort = 0,count = 0;
		int w[26] = {0};
		int length = strlen(c); 
	//	printf("%d\n",length);
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
				}
			}
			else if(w[c[i]-'A']==0)
			{
				sort++;
				w[c[i]-'A'] = 1;
			}
		}
	//	printf("%d %d\n",count,sort);
		if((count<10)&&(sort<=10))
		 printf("Yes\n");
		else
		 printf("No\n");
	}
}

