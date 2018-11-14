#include<iostream>
#include<cstdio>

using namespace std;

int hour(int x, int y);
int minute(int x, int y);

int main()
{
    int h1, m1, h2, m2, h, m;

    cin>>h1>>m1>>h2>>m2;
    h=hour(h1, h2);
    m=minute(m1, m2);

    if(m1>m2 && m<60) h--;
    if(h>=24 && m>0) h=0;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

    return 0;
}

int hour(int x, int y)
{
    int c;
    int r=0, s=1;

    if(x==0) x=24;
    if(y==0) y=24;

    for(c=x; ; c++)
    {
        if(y==c && x!=y) break;
        if(y==c && x==y && s==2) break;
        if(c==24) c=0, s++;
        r++;
    }

    return r;
}

int minute(int x, int y)
{
    int c;
    int r=0;

    if(x==0) x=60;
    if(y==0) y=60;

    for(c=x; ; c++)
    {
        if(y==c) break;
        if(c==60) c=0;
        r++;
    }

    return r;
}
