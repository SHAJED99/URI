#include<stdio.h>

int main()
{
    double h, a, l;

    scanf("%lf%lf", &h, &a);

    l=(h*a)/12.00;

    printf("%.3lf\n", l);

    return 0;
}
