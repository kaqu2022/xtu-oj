#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    scanf("%lf",&x);
    if(x>=0 && x<10){
        printf("%.5lf",cos(x+3.0));
    }
    else if(x>=10 && x<20){
        printf("%.5lf",pow(cos(x+7.5),2));
    }
    else if(x>=20 && x<30){
        printf("%.5lf",pow(cos(x+4.0),4));
    }
    else{
        printf("Not define");
    }
    return 0;
}
