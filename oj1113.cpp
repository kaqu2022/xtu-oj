#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a, b, c, d;
		scanf("%d %d",&a,&b);
		scanf("%d %d",&c,&d);
		if((c>=a&&c<=b)||(d>=a&&d<=b)||(a>=c&&b<=d))//Ïà½»ÏàÈÝ 
		 printf("Yes\n");
		else
		 printf("No\n");
	}
	return 0;
}
