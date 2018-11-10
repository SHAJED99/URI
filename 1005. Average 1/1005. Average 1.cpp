#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    double a, b, c;
    scanf("%lf%lf", &a, &b);
    a=a*3.5;
    b=b*7.5;
    c=((a+b)/11);
    printf("MEDIA = %.5lf\n", c);
    return 0;
}
