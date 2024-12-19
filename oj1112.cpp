#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int x1,x2,x3,y1,y2,y3;
		scanf("%d %d",&x1,&y1);
		scanf("%d %d",&x2,&y2);
		scanf("%d %d",&x3,&y3);
		int s1,s2,s3,s4;
		s1 = x2 - x1;
		s2 = y2 - y1;
		s3 = x3 - x1;
		s4 = y3 - y1;
		if(s1*s4 == s2*s3)
		 printf("Yes\n");
		else
		 printf("No\n");
	 } 
	 return 0;
}
