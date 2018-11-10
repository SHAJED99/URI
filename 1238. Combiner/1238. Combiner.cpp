#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int lch1, lch2, l;
        char ch1[60], ch2[60];
        scanf("%s%s", ch1, ch2);

        lch1=strlen(ch1);
        lch2=strlen(ch2);

        if(lch1>=lch2) l=lch1;
        else l=lch2;

        for(int c=0; c<l; c++)
        {
            if(c<lch1) printf("%c", ch1[c]);
            if(c<lch2) printf("%c", ch2[c]);
        }

        printf("\n");
    }
}
