#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	char s[200];
	scanf("%d",&k);
	while(k--)
	{
		scanf("%s",s);
		int len = strlen(s);
		int result = 0,cnt = 0,flag = 0;//result��¼�ܷ�����cnt��¼����o���ִ��� 
		for(int i = 0;i<len;i++)
		{
			if(s[i]=='O')
			{
				if(flag==1)
				{
					cnt++;
					if(cnt==1)
					 result+=30;
					else if(cnt==2)
					 result+=40;
					else
					 result+=50;
				}
				else//��һ������o 
				{
					cnt = 0;//���������ص�0	
					result+=20;
				}
				flag = 1;
			}
			else if(s[i]=='X')
			{
				flag = 0;//Ĭ�ϲ����� 
			}
			else if(s[i]=='#')
			 break;
		}
		printf("%d\n",result);
	}
}
