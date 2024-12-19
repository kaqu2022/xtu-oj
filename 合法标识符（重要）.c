#include <stdio.h>
int main ()
{
	char a[20];
	int flag,i;
	gets(a);
	if(a[0]>'0'&&a[0]<'9')
	 flag=0;
    for(i=0;i<20;i++);
    {
     if(a[i]>='A'&&a[i]<='z'||a[i]>='0'&&a[i]<=9||a[i]=='_')
      flag=1;
     else
     {
      flag=0;
      break;
     }
    }
    if(flag=1)
     printf("yes\n");
    else
     printf("no\n");
	
}
