#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a, b, c;
	a = n%10;
	b = n/10%10;
	c = n/100;//仅有2为相同 
	if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&a!=b))
	 printf("Yes");
	else
	 printf("No");
	 
}
