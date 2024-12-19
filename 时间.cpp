#include <stdio.h>
int main()
{
	int t,n,shi,fen,miao;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		shi = n/3600;//º∆À„–° ±
		fen = n%3600/60;
		miao = n%60;
	    printf("%02d:%02d:%02d\n",shi,fen,miao);
	}
}
