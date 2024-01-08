#include <stdio.h>
#include <stdlib.h>

// structure of a node
struct node
{
    int data;
    struct node *next;
}*q=NULL;

// function to create a node in cll
void create()
{
    int data;
    struct node *temp;
    printf("\nEnter data: ");
    scanf("%d",&data);
    if(q==NULL)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
    }
    temp->next=temp;
    q=temp;
}

//function to display cll
void display()
{
    if(q==NULL)
    {
        printf("\nNULL");
        return;
    }
    struct node *temp=q;
    printf("\n");
    //prints an output till temp->next is not the head
    while(temp->next!=q)
    {
        printf("%d--->",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}

// function to add a node at beginning of cll
void addatbeg()
{
    int data;
    struct node *temp,*lastnode=q;
    printf("\nEnter data: ");
    scanf("%d",&data);
    //make the pointer lastnode point to the lastnode
    while (lastnode->next!=q)
    {
        lastnode=lastnode->next;
    }
    
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=q;
    q=temp;
    
    //make lastnode point to head
    lastnode->next=q;
}


void addatpos()
{
    int data,pos;
    struct node *temp,*r=q;
    printf("\nEnter data: ");
    scanf("%d",&data);
    printf("\nEnter pos: ");
    scanf("%d",&pos);

    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    for (int i = 1; i < pos; i++) // for loop for moving r to the required position
    {
        if(r->next!=q) //if the next node not head then move r 1 pos ahead else print pos not found
            r=r->next;
        else
        {
            printf("\nPOS NOT FOUND");
            return;
        }
    }
    
    temp->next=r->next;
    r->next=temp;    
}

void deleteatbeg()
{
    struct node *temp=q,*lastnode=q;

    //make the pointer lastnode point to the lastnode
    while (lastnode->next!=q)
    {
        lastnode=lastnode->next;
    }

    if(q->next!=q) //check if the there is only 1 node in the cll
        q=q->next;
    else
        q=NULL;    
    free(temp);
    
    //make lastnode point to head
    lastnode->next=q;
}

void deleteatpos()
{
    int data,pos;
    struct node *r=q,*old;
    printf("\nEnter pos: ");
    scanf("%d",&pos);


    for (int i = 1; i < pos; i++) // for loop for moving r to the required position
    {
        if(r->next!=q) //if the next node not head then move r 1 pos ahead else print pos not found
        {
            old=r; //point old to t then increment r
            r=r->next;
        }
        else
        {
            printf("\nPOS NOT FOUND");
            return;
        }
    }
    if(r!=q) //check if r is the head if true then make q=NULL
        old->next=r->next;
    else
        q=NULL;
    free(r);  
}
int main()
{
    create();
    display();
    int o,con;
    do{
        printf("\nEnter 1 to addatbeg\nEnter 2 to insert at pos\nEnter 3 to deleteatbeg\nEnter 4 to delete at pos\nEnter choice: ");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            addatbeg();
            display();
            break;
        
        case 2:
            addatpos();
            display();
            break;
        
        case 3:
            deleteatbeg();
            display();
            break;
        
        case 4:
            deleteatpos();
            display();
            break;

        default:
        printf("\nWrong choice");
            break;
        }
        printf("\ndo you want to continue(1/0): ");
        scanf("%d",&con);
    }
    while (con==1);    
    return 0;
}