#include<stdio.h>

int main()
{
    double a, b, c, d, r;

    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

    a=a*2;
    b=b*3;
    c=c*4;
    r=a+b+c+d;
    r=r/10.00;

    printf("Media: %.1lf\n", r);

    if(r>=7.0) printf("Aluno aprovado.\n");
    else if(r<5.0) printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");

        scanf("%lf", &a);
        printf("Nota do exame: %.1lf\n", a);

        r=r+a;
        r=r/2;

        if(r>=5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");

        printf("Media final: %.1lf\n", r);
    }

    return 0;
}
