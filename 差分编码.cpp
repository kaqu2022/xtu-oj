#include<stdio.h>
#include <string.h>
int str[1005],arr[1005];
int main()
{
    int t,n,s;
    scanf("%d",&t);
    for(int j = 0;j<t;j++)
    {
        scanf("%d",&n);//°¸Àý¸öÊý 
        for(int i = 0;i<n;i++)
        {
        	scanf("%d",&arr[i]);
		}
		str[0] = arr[0];
        for(int i = 1;i<n;i++)
        {
            str[i] = arr[i] - arr[i-1];
        } 
		for(int i = 0;i<n-1;i++)
	    {
	        printf("%d ",str[i]);
	    }
	    printf("%d\n",str[n-1]);
    }
    return 0;
}
