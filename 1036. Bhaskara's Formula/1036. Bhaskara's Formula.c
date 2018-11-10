#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, x, y, m;

    scanf("%lf%lf%lf", &a, &b, &c);

    m=(b*b)-(4*a*c);

    if(a==0.00 || m<0){printf("Impossivel calcular\n"); return 0;}

    x=(-b+sqrt(m))/(2*a);
    y=(-b-sqrt(m))/(2*a);

    printf("R1 = %.5lf\nR2 = %.5lf\n", x, y);

    return 0;
}
