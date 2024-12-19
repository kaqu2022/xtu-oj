#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x1,x2,y1,y2,r1,r2;;
		scanf("%d %d %d",&x1,&y1,&r1);
		scanf("%d %d %d",&x2,&y2,&r2);
		double d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		//printf("%f\n",d);
		if(d==r1+r2)//外切 
		 printf("4\n");
        else if(d<r1+r2&&d>fabs(r1-r2))//相交 
		 printf("3\n");
        else if(d==fabs(r1-r2))//内切 
		 printf("2\n");
        else if(d>r1+r2)//相离 
		 printf("5\n");
        else 
		 printf("1\n");
	}
}
