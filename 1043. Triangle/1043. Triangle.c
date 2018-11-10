#include<stdio.h>

int main()
{
    double a, b, c, p=0;

    scanf("%lf%lf%lf", &a, &b, &c);

    if((a+b>c) && (a+c>b) && (b+c>a)) p=1;

    if(p==0) printf("Area = %.1lf\n", ((a+b)*c)/2.0);
    else printf("Perimetro = %.1lf\n", a+b+c);

    return 0;
}
