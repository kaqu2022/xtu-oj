#include<stdio.h>
#include<string.h>
#include<math.h>
int change(char s[],int t)
{
	int len = strlen(s);
	int flag = 0,sum = 0, w = 1;//��ʼ�ӵ�0����ʼ 
	if(s[0]=='-')//��־���� 
	  flag = 1;
	for(int i = len-1;i>=flag;i--)//��2����ת��Ϊ10���� 
		{
			if(s[i]>='a'&&s[i]<='z')
			{
				//printf("%d\n",s[i]-'a'+36);
				sum+=(w*(s[i]-'a'+36));
			}
			else if(s[i]>='A'&&s[i]<='Z')
			{
				//printf("%d\n",s[i]-'A'+10);
				sum+=(w*(s[i]-'A'+10));
			}
			else
			{
				//printf("%d\n",s[i]-'0');
				sum+=(w*(s[i]-'0'));
			}
			w *= t;
			printf("sum:%d\n",sum);
		}
		if(flag == 1)
		 sum = -1*sum;
		return sum;
}
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		char a[65],b[65];
		int c, d;
		scanf("%s %d", a, &c);//����ĸ���ַ������� 
		scanf("%s %d", b, &d);
		//printf("%s %d %s %d\n",a, c, b,d);
		int sum1,sum2;
		sum1 = change(a,c);
		sum2 = change(b,d);
		int sum  =sum1+sum2;
		printf("%d\n",sum);
	}
}
