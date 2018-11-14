#include<stdio.h>

int main()
{
    double a[3], temp, A, B, C;
    int c;

    for(c=0; c<3; c++)
        scanf("%lf", &a[c]);
//===============================================
A:
    for(c=0; c<2; c++)
        if(a[c]<a[c+1])
        {
            temp=a[c];
            a[c]=a[c+1];
            a[c+1]=temp;
        }

    for(c=0; c<2; c++)
        if(a[c]<a[c+1])
            goto A;
//===============================================

    A=a[0];
    B=a[1];
    C=a[2];

    if(A >= (B + C)) printf("NAO FORMA TRIANGULO\n");
    else if((A*A) == ((B*B) + (C*C))) printf("TRIANGULO RETANGULO\n");
    else if((A*A) > ((B*B) + (C*C))) printf("TRIANGULO OBTUSANGULO\n");
    else if((A*A) < ((B*B) + (C*C))) printf("TRIANGULO ACUTANGULO\n");

    if(A==B && B==C) printf("TRIANGULO EQUILATERO\n");
    else if((A==B && A!=C) || (A==C && A!=B) || (B==C && B!=A)) printf("TRIANGULO ISOSCELES\n");

    return 0;
}
