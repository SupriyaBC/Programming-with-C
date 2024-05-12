
#include<stdio.h>
#define MAX 5
void insert();
void display();
int array[MAX];
int rear=-1;
int front=-1;
int main()
{
    int choice;
    while(1)
    {
        printf("1.insert the element\n");
        printf("2.display the element\n");
        printf("Quit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(1);
            break;
        default:
            printf("wrong\n");

        }

    }

}
void insert()
{
    int rn;
    if(rear==MAX-1)
    printf("Queue overflow\n");
    else
    {
        if(front==-1)
            front=0;
        printf("Insert rn");
        scanf("%d",&rn);
        rear=rear+1;
        array[rear]=rn;
    }

}
void display()
{
    int i;
    if(front==-1)
        printf("Queue is empty\n");
    else
    {
        for(i=front; i<=rear; i++)
            printf("%d\t",array[i]);
            printf("\n");

    }

}
