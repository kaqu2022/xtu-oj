#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)//������ 
	{
		char c[25][20];
		int count = 0;
		scanf("%s",c[0]);//start
		while(scanf("%s",c[++count]))
		{
			if(!strcmp(c[count],"END"))
			 break;
			//printf("%d ",count);
		}	//��������ַ������ֵ�˳������
		for(int i = 1;i<count-1;i++)
		{
			for(int j = i+1;j<count;j++)
			{
				if(strcmp(c[i],c[j])>0)
				{
					char t[20];
					strcpy(t,c[i]);
					strcpy(c[i],c[j]);
					strcpy(c[j],t);
				}
			}
		 } 
		int cnt = 1,max = 1;
		char maxpeople[20];
		strcpy(maxpeople,c[1]);
		for(int i = 2;i<count-1;i++)
		{
			if(!strcmp(c[i-1],c[i]))//���ֵ�˳���ź�ǰ���ַ�����ͬ���ظ�����
			{
				cnt++;
				if(cnt>max)
				{
					max = cnt;
					strcpy(maxpeople,c[i]);
				}
			 } 
			 else
			 cnt = 1;
		}
		printf("%s\n",maxpeople);
		
	}
}
