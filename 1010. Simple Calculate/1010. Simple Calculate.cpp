#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    double a=0, b, c, r;

    for(int d=0; d<2; d++)
    {
        cin>>r>>b>>c;
        a=a+(b*c);
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", a);

    return 0;

}
