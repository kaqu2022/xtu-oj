#include <stdio.h>
float max(float x, float y, float z)
{
    float max = x;
    if(x < y)
     max = y;
    if(x  < z)
     max = z;
    return max;
}
int main ()
{
    float a, b, c, m;
    scanf("%f%f%f", &a, &b, &c);
    m = max(a,b,c)/(max(a + b,b,c)*max(a,b,b+c));
    printf("%.3f",m);
    return 0;
}
