#include <stdio.h>
#include <string.h>
int main ()
{
	int k,l,n,len,i;
	scanf("%d",&n);
	while(n--)
	{
		char a[205]={0},b[205]={0};//ԭ����a,bΪת��������� 
		scanf("%s",a);
		scanf("%d%d",&k,&l);
		len = strlen(a);
		for(i=0;i<len;i++)
		{
			if(i<k-1||i>k+l-2)//����ת����Χ�ڡ� 
			{
				b[i]=a[i];
			}
		}
		for(i=0;i<l;i++)
		{
			b[k-1+i]=a[k+l-2-i];
		}
		printf("%s\n",b);
	}
	return 0;
}

