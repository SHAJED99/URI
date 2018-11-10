#include<stdio.h>

void input(void);
void dis(void);
int mdc(int a, int b);

int N1, N2, D1, D2, x, y;
char a, b, c;

int main()
{
    int c, m;
    scanf("%d", &c);

    while(c--)
    {
        input();
        dis();
        m=mdc(x, y);
        printf("%d/%d\n", x/m, y/m);
    }

    return 0;
}

void input(void)
{
    scanf("%d", &N1);

    getchar();
    scanf("%c", &a);

    scanf("%d", &D1);

    getchar();
    scanf("%c", &b);

    scanf("%d", &N2);

    getchar();
    scanf("%c", &c);

    scanf("%d", &D2);

//    printf("%d %c %d %c %d %c %d", N1, a, D1, b, N2, c, D2);
}

void dis(void)
{
    if(b=='+')
    {
        x=(N1*D2 + N2*D1);
        y=(D1*D2);
        printf("%d/%d = ", x, y);
    }

    else if(b=='-')
    {
        x=(N1*D2 - N2*D1);
        y=(D1*D2);
        printf("%d/%d = ", x, y);
    }

    else if(b=='*')
    {
        x=(N1*N2);
        y=(D1*D2);
        printf("%d/%d = ", x, y);
    }

    else if(b=='/')
    {
        x=(N1*D2) ;
        y=(N2*D1);
        printf("%d/%d = ", x, y);
    }
}

int mdc(int a, int b)
{
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	if(a%b == 0)
		return b;
	else
		return mdc(b,a%b);
}
