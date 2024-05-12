
#include<stdio.h>
#include<stdlib.h>
struct movie
{
    char m_n[10];
        char p_n[10];
        char d_n[10];
        int ry;
        char ph[10];


    };
int main()
{
    struct movie t[20];
    struct movie*p;
    p=t;
    int i,j,k,a,n,m[30],no_m;
    printf("Enter the no of movies\n");
    scanf("%d",&no_m);

    for(k=0;k<2;k++)
    {
    printf("Enter the m_n,p_n,d_n,ry,ph \n");
    scanf("%s%s%s%d%s",p->m_n,p->p_n,p->d_n,&p->ry,p->ph);
    p++;
    }
    p=t;
    for(k=0;k<2;k++)
    {
    printf("\n movie details according to director\n");
    printf("\n m_n= %s, p_n=%s,d_n=%s,ry=%d ,ph=%s",p->m_n,p->p_n,p->d_n,p->ry,p->ph);
    p++;
    }




    printf("enter the ry\n");
    for(i=0;i<2;++i)
    scanf("%d",&p->ry);

    for(i=0;i<=n;++i)
    {
       for(j=i+1;j<=n;++j)
        {
           if(m[i]>m[j])
            {
              a=m[i];
                m[i]=m[j];
                m[j]=a;
            }
        }
    }


    printf("ascending order of movies");
       printf("%d",p->ry);

}
