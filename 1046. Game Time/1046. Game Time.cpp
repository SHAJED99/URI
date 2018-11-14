#include<iostream>

using namespace std;

int main()
{
    int c;

    int x, y, r=0, s=1;
    cin>>x>>y;

    if(x==0) x=24;
    if(y==0) y=24;

    for(c=x; ; c++)
    {
        if(y==c && x!=y) break;
        if(y==c && x==y && s==2) break;
        if(c==24) c=0, s++;
        r++;
    }

    cout<<"O JOGO DUROU "<<r<<" HORA(S)"<<endl;

    return 0;
}
