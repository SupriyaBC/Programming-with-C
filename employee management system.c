
#include<stdio.h>
#include<stdlib.h>
typedef struct emp
{
    int ID;
    char name[10];
    float salary;

}emp;

int main()
{
    struct emp s1[10];
    struct emp*p ;
    int i,e;
    float salary;
    p=s1;
    printf("enter the salary\n");
    scanf("%f",&salary);
    if(salary<=25000)
    {
        printf("not valid\n");
    }
    else{
    printf("enter the no.of emp\n");
    scanf("%d",&e);
    for(i=0; i<=8; i++)
    {
        printf("\n Enter the ID,name,salary");
        scanf("%d%s%f",&p->ID,p->name,&p->salary);
        p++;

    }
    p=s1;
    for(i=0; i<8; i++)
    {
        printf("emp details\n");
        printf("\n ID= %d name= %s salary=%f",p->ID,p->name,p->salary);
        p++;

    }
    printf("\n\n\n");
    return 0;
    return 1;
    return 2;
    return 3;
    return 4;

}
}
