#include<iostream>
using namespace std;
const int N = 100010;
int q[N];

void quick_sort(int q[],int l,int r)
{
	if(l>=r)
	 return;
	int i = l-1,j = r+1,x = l+r >> 1;
	while(i<j)
	{
		do i++; while(q[i]<x);
		do j--; while(q[i]>x);
		if(i<j)
		{
			int temp = q[i];
			q[i] = q[j];
			q[j] = temp;
		}
	}
	quick_sort(q,l,j);
	quick_sort(q,j+1,r);
}
int main()
{
	int n;
	cin >> n;
	for(int i  =0;i<n;i++)
     scanf("%d",&q[i]);
	quick_sort(q,0,n-1);
	for(int i = 0;i<n;i++)
	 printf("%d ",q[i]);
	 
}
