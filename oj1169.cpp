#include<stdio.h>
#include<string.h>
int a[1000005];
void quick_sort(int q[], int l, int r)
{
    if(l >= r) return;
    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while(i < j)
    {
        do i++; while(q[i] > x);
        do j--; while(q[j] < x);
        if(i < j){
        	int t = q[j];
        	q[j] = q[i];
        	q[i] = t;
		}
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}
int main()
{
	int n, m, t;
	while(scanf("%d %d", &n, &m)&&n&&m)
	{
		int sum = 0;
		memset(a,0,sizeof(a));
		for(int i = 0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		quick_sort(a,0, n-1); 
		for(int i = 0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		for(int i = 0;i<m;i++)
		{
			sum+=a[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
