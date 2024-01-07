//stacks using linked lists

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
}*tos=NULL;

void push()
{
    int data;
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&data);
    temp->data=data;
    temp->link=tos;
    tos=temp;
}

void pop()
{
    if(tos==NULL)
    {
        printf("\nQueue underflow");
        return;
    }
    struct node *r=tos;
    printf("\nElement deleted is %d\n",tos->data);
    tos=tos->link;
    free(r); 
}

void display()
{
    struct node *temp=tos;
    while(temp->link!=NULL)
    {
        printf("%d--->",temp->data);
        temp=temp->link;
    }
    printf("%d",temp->data);
}

int main()
{
    int choice,con;
    do{
        printf("\nEnter 1 to push an elemnt\nEnter 2 t pop\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            display();
            break;
        
        case 2:
            pop();
            if(tos!=NULL)
                display();
            break;
        default:
            printf("\nWrong choice");
            break;
        }
        printf("\nDo you want to continue(1/0): ");
        scanf("%d",&con);
    }
    while(con==1);
    return 0;

}
