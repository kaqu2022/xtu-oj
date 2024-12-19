#include<stdio.h>
#include<string.h>


int main()
{
	char a[1000];
	int num[40] = {0};
	char c;
	int b = 0;
	printf("d");
	while (scanf("%s",a) != EOF)
	{
		int i;
		for (i = 0; i < (int)strlen(a); i++)
		{
			num[a[i] - 97]++;
		}
		int max = 0,flag = 100;
		for (i = 0; i < 26; i++)
		{
			if (num[i] > max)
			{
				flag = i;
				max = num[i];
			}
		}
		printf("%d ", flag);
		for (i = 0; i < 26; i++)
		{
			if (num[i] == max)
			{
				printf("%c ", i + 97);
			}
		}
	}

	return 0;
}
