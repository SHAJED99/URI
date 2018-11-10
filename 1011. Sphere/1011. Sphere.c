#include<stdio.h>

int main()
{
    double a, b, c, r;

    scanf("%lf", &a);

    b=4.00/3.00;
    r=3.14159;
    c=a*a*a;

    printf("VOLUME = %.3lf\n", b*r*c);

    return 0;
}
