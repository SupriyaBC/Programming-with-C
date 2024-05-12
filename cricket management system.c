
#include<stdio.h>
#include<stdlib.h>
struct team
{
    char team_name[10];


    struct cricketer
    {
        char c_name[10];
        int ODI;
        int hs;
        int nm;
    };
};
int main()
{
    struct team t[20];
    struct team*p;
    p=t;
    printf("Enter the team name\n");
    scanf("%s",p->team_name);
    printf("Enter the c_name\n ODI\n hs\n nm\n");
    scanf("%s%d%d%d",p->c_name,&p->ODI,&p->hs,&p->nm);
    printf(" team_name=%s",p->team_name);
    printf("\n achievements of cricketer");
    printf("\n c_name = %s, ODI=%d,hs=%d,nm=%d",p->c_name,p->ODI,p->hs,p->nm);
    return 0;
}
