#include<stdio.h>
int main () {
    int n;
    int a[7];
    scanf("%d",&n);
    int sum = 0;
    for(int i = 0; i < 7;i++)//一周内读完
    {
        scanf("%d",&a[i]);
        sum += a[i];
       	printf("%d",sum);
    } 

    n = n%sum;
    sum = 0;
    for(int i = 0; i < 7;i++)
    {
        sum += a[i];
        if(sum>=n)
        {
            printf("%d",i+1);
            break;
        }
    }
    
}
