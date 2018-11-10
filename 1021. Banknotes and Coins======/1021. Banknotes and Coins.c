#include<stdio.h>

#define m 0.01;

void banknotes_1018(double a)
{
    a=a+m;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", (int)(a/10000));
    a=(int)a%10000;

    printf("%d nota(s) de R$ 50.00\n", (int)(a/5000));
    a=(int)a%5000;

    printf("%d nota(s) de R$ 20.00\n", (int)(a/2000));
    a=(int)a%2000;

    printf("%d nota(s) de R$ 10.00\n", (int)(a/1000));
    a=(int)a%1000;

    printf("%d nota(s) de R$ 5.00\n", (int)(a/500));
    a=(int)a%500;

    printf("%d nota(s) de R$ 2.00\n", (int)(a/200));
    a=(int)a%200;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", (int)(a/100));
    a=(int)a%100;

    printf("%d moeda(s) de R$ 0.50\n", (int)(a/50));
    a=(int)a%50;

    printf("%d moeda(s) de R$ 0.25\n", (int)(a/25));
    a=(int)a%25;

    printf("%d moeda(s) de R$ 0.10\n", (int)(a/10));
    a=(int)a%10;

    printf("%d moeda(s) de R$ 0.05\n", (int)(a/5));
    a=(int)a%5;

    printf("%d moeda(s) de R$ 0.01\n", (int)(a/1));
}

int main()
{
    double x;
    int a;

    scanf("%lf", &x);

    banknotes_1018((x*100));

    return 0;
}
