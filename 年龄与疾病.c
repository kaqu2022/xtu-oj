#include <stdio.h>
int main ()
{   
	int n,i,age[100];
	double a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&age[i]);           
	}
	for(i=0;i<n;i++)
	{
		if(age[i]<=18)
		 a++;
	    else if(age[i]>=19&&age[i]<=35)
	     b++;
        else if(age[i]>=36&&age[i]<=60)
         c++;
        else
         d++;
    }
	printf("1-18:%.2f%%\n19-35:%.2f%%\n36-60:%.2f%%\n60-:%.2f%%\n",a/n*100,b/n*100,c/n*100,d/n*100);
	return 0;
}

