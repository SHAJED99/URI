#include<stdio.h>
#include<math.h>

int main()
{
    double r1, r2, x1, x2, y1, y2, d1, d2;

    while(scanf("%lf%lf%lf%lf%lf%lf", &r1, &x1, &y1, &r2, &x2, &y2)!=EOF)
    {
        if(r1>=r2)
        {
            d1=x2-x1; d1=d1*d1;
            d2=y2-y1; d2=d2*d2;
            d1=sqrt(d1+d2);
            d2=r1-r2;

            if(d1<=d2) printf("RICO\n");
            else printf("MORTO\n");
        }

        else printf("MORTO\n");
    }





}
