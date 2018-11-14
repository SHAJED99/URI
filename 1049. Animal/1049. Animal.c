#include<stdio.h>
#include<string.h>

int main()
{
    char ch[20];

    scanf("%s", ch);
    if(!strcmp(ch, "vertebrado"))
    {
        scanf("%s", ch);
        if(!strcmp(ch, "ave"))
        {
            scanf("%s", ch);
            if(!strcmp(ch, "carnivoro")) printf("aguia\n");
            else printf("pomba\n");
        }

        else
        {
            scanf("%s", ch);
            if(!strcmp(ch, "onivoro")) printf("homem\n");
            else printf("vaca\n");
        }
    }

    else
    {
        scanf("%s", ch);
        if(!strcmp(ch, "inseto"))
        {
            scanf("%s", ch);
            if(!strcmp(ch, "hematofago")) printf("pulga\n");
            else printf("lagarta\n");
        }

        else
        {
            scanf("%s", ch);
            if(!strcmp(ch, "hematofago")) printf("sanguessuga\n");
            else printf("minhoca\n");
        }
    }

    return 0;
}
