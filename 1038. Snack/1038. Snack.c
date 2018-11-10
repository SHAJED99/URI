#include<stdio.h>

int main()
{
    float a, b, x;
    scanf("%f%f", &b, &a);

    if(b==1) x=a*4;
    else if(b==2) x=a*4.50;
    else if(b==3) x=a*5;
    else if(b==4) x=a*2;
    else if(b==5) x=a*1.50;

    printf("Total: R$ %.2f\n", x);
    return 0;
}
