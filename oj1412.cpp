#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int in[4],out[12];//out顺时针存储外层矩阵 
		scanf("%d %d %d %d",&out[0],&out[1],&out[2],&out[3]);
		scanf("%d %d %d %d",&out[11],&in[0],&in[1],&out[4]);
		scanf("%d %d %d %d",&out[10],&in[3],&in[2],&out[5]);
		scanf("%d %d %d %d",&out[9],&out[8],&out[7],&out[6]);
		//矩阵一：找到内圈最大的数及外圈连续3个和最大的数
		//矩阵二：内圈2个连续和最大及外圈连续2个和最大的数
		//矩阵三：内圈4个数组成 
		int maxin1 = 0,maxin2 = 0,maxin3 = 0;
		for(int i = 0;i<4;i++)
		{
			if(in[i]>maxin1)//内圈最大的数
			 maxin1 = in[i];
			if(in[i]+in[(i+1)%4]>maxin2)//内圈2个连续和最大
			 maxin2 = in[i]+in[(i+1)%4];
			maxin3+=in[i];
		}
		int maxout2 = 0,maxout3 = 0;
		for(int i = 0;i<12;i++)
		{
			if(out[i]+out[(i+1)%12]+out[(i+2)%12]>maxout3)//外圈连续3
			 maxout3 = out[i]+out[(i+1)%12]+out[(i+2)%12];
			if(out[i]+out[(i+1)%12]>maxout2)//外圈连续2个
			 maxout2 = out[i]+out[(i+1)%12];
		}
		int result1 = maxin1+maxout3;
		int result2 = maxin2+maxout2;
		int r = 0;
		if(result1>r) r = result1;
		if(result2>r) r = result2;
		if(maxin3>r) r = maxin3;	
		printf("%d\n",r);
	}
}
