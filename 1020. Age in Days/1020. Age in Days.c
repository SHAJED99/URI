#include<stdio.h>

int main()
{
    int y, m, d, N;

    scanf("%d", &N);

    y=N/365;
    N=N%365;

    m=N/30;
    N=N%30;

    d=N;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);

    return 0;
}
