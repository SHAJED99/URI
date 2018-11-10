#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    string s;
    cin>>s;

    double a, b;

    cin>>a>>b;

    b=b*0.15;

    printf("TOTAL = R$ %.2lf\n", a+b);
    return 0;
}
