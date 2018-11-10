#include<stdio.h>

#define p 3.14159

int main()
{
    double a, x;
    scanf("%lf", &a);

    x=a*a*p;
    printf("A=%.4lf\n", x);
    return 0;
}
