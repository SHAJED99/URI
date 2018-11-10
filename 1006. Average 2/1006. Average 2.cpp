#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    double a, b, c;
    cin>>a>>b>>c;

    a=a*2;
    b=b*3;
    c=c*5;

    printf("MEDIA = %.1lf\n", (a+b+c)/10);

    return 0;
}
