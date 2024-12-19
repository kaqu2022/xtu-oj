#include <stdio.h>
int main ()
{
	int i,j,c,count=0;
	printf("请输入一个不多于5位的正整数：\n");
	scanf("%d",&i);
	while(i!=0)
	{
		 i=i/10;
		 count++;
		 printf("%d\n",i%10);
		 i/10;
    }
    printf("一共有%d位数字\n",count);
    return 0;
}
