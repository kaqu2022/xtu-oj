#include<bits\stdc++.h>

using namespace std;
int ans[10010],temp;
int l,i,n,t,mini = 0;
int main()
{
	scanf("%d",&n);
	for(int i = 1;i<=n;i++)
	{
		temp = 0;
		scanf("%d",&i);
		scanf("%d",&l);
		while(scanf("%d",&t)&&t)
		{
			temp = max(temp,ans[t]);//��֤׼�����������֮ǰ 
		}
		ans[i] = temp + l;//���ÿһ����ҵʱ��Ϊǰ�ù��������+��ǰʱ��ҵʱ�� 
		mini = max(mini,ans[i]);
	}
	printf("%d\n",mini);
}	
