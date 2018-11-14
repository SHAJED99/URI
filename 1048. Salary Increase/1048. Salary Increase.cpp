#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    double a, s, d, p;
    cin>>a;

    if(a<=400 && a>=0) p=15.00;
    else if(a<=800 && a>=400.01) p=12.00;
    else if(a<=1200 && a>=800.01) p=10.00;
    else if(a<=2000 && a>=1200.01) p=7.00;
    else if(a>2000) p=4.00;

    d=a*p/100.00;
    s=a+d;

    printf("Novo salario: %.2lf\n", s);
    printf("Reajuste ganho: %.2lf\n", d);
    printf("Em percentual: %.0lf %\n", p);

    return 0;
}
