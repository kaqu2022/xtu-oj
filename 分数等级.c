#include <stdio.h>
int main ()
{
	float score;
	char dengji;
	scanf("%f",&score);
	if(score>100||score<0)
	 printf("wrong!\n");
    switch((int)(score/10))
   {
	case 10:
   	case 9:printf("A\n");break;
   	case 8:printf("B\n");break;
   	case 7:printf("C\n");break;
   	case 6:printf("D\n");break;
   	default:printf("E\n");break;
   }
   	return 0;
}
