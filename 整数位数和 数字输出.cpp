#include <stdio.h>
int main ()
{
	int i,j,c,count=0;
	printf("������һ��������5λ����������\n");
	scanf("%d",&i);
	while(i!=0)
	{
		 i=i/10;
		 count++;
		 printf("%d\n",i%10);
		 i/10;
    }
    printf("һ����%dλ����\n",count);
    return 0;
}
