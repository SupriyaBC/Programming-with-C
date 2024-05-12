
#include<stdio.h>
#include<stdlib.h>
void enqueue();
void display();
struct node
{
    int data;
    struct node*next;

};
struct node*front=NULL;
struct node*rear=NULL;
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
            enqueue();
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
void enqueue()
{
    int rn;
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the rn\n");
    scanf("%d",&rn);
    new->data=rn;
    new->next=NULL;
    if(rear==NULL)
    {
        front=new;
        rear=new;

    }
    else
    {
        rear->next=new;
        rear=new;
    }


}
void display()
{
    struct node*temp;
    {
    if(front==NULL)
    {
        printf("Queue is empty\n");
    }
    else
        {
        for(temp=front;temp<=rear;temp=temp->next)

            printf("%d\t",temp->data);
        }
    }
}
