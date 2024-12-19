#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,i,j,k,flag,l,m=1;
    scanf("%d",&k);
    while(k--)
    {
        char a[21][201],b[201]={};
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%s",a[i]);
        }
        printf("Case %d: ",m++);
        for(j=0;j<200;j++)
        {
            flag = 0;
            for(i=1;i<n;i++)
            {
                if(a[i][j]==a[i-1][j])
                 flag++;
             }
            if(flag==n-1)
            {
                b[j]=a[i-1][j];
            }
            else
             break;
        }
        l = strlen(b);
        if(l!=0)
        {
            for(i=0;i<l;i++)
            {
                printf("%c",b[i]);
            }
            printf("\n");
        }
        else
        {
            printf("\n");
            continue;
        }
    }
}
