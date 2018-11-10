#include<stdio.h>

int main()
{
    int a[3], c, temp, b[3];


    for(c=0; c<3; c++)
    {
        scanf("%d", &a[c]);
        b[c]=a[c];
    }
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

    for(c=2; c>=0; c--)
        printf("%d\n", a[c]);

    printf("\n");

    for(c=0; c<3; c++)
        printf("%d\n", b[c]);

    return 0;
}
