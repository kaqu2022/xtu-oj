#include <stdio.h>
int main ()
{
	float a,b,c,t;
	printf("���������ε����ߣ�\n");
	scanf("%f,%f,%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a==b==c)
		 printf("�ȱ�������\n");
	    else if(a==b||a==c||b==c)
	     printf("����������\n");
        else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+c*c)
         printf("ֱ��������\n");
        else
         printf("��ͨ������\n");
        
	}
 
    return 0;
}
