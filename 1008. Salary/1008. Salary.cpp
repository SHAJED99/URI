#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n;
    double h, a;

    cin>>n>>h>>a;

    cout<<"NUMBER = "<<n<<endl<<"SALARY = U$ ";
    printf("%.2lf\n", h*a);
    return 0;
}
