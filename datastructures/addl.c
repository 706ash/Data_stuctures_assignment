// program to create two singly linked lists
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
}*p;

void create(struct node **a) // Function to create a singly linked list
{
    struct node *temp;
    int num;
    printf("\nEnter data: ");
    scanf("%d", &num);
    if (*a == NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->link = NULL;
        *a = temp;
    }
}

void display(struct node *b)
{
    struct node *temp;
    temp = b;
    while (temp->link != NULL)
    {

        printf("%d--->", temp->data);
        temp = temp->link;
    }
    printf("%d", temp->data);
}

void append(struct node *c) // Function to add a node  at the end of a singly linked list
{
    struct node *temp, *r;
    int num;
    printf("\nEnter data: ");
    scanf("%d", &num);
    temp = c;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    r = (struct node *)malloc(sizeof(struct node));
    r->data = num;
    r->link = NULL;
    temp->link = r;
}

void add(struct node *a, struct node *b)
{
    p=(struct node *)malloc(sizeof(struct node));
    struct node *list1, *list2, *sum,*r;
    r=(struct node *)malloc(sizeof(struct node));
    r->data=0;
    r->link=NULL;
    p->link=r;
    p->data=0;
    list1 = a;
    list2 = b;
    sum = p;
    while (list1 != NULL)
    {
        
        sum->data=0;
        sum->data = list1->data + list2->data;
        if(sum->link!=NULL)
            sum=sum->link;
        list1=list1->link;
        list2=list2->link;
        
    }
    display(p);
}

int main()
{
    struct node *q = NULL, *m = NULL, *p = NULL;
    printf("\nlist 1\n");
    create(&q);
    printf("\nlist 2\n");
    create(&m);
    printf("\nlist 1 is:  ");
    
    display(q);
    printf("\nlist 2 is:  ");
    display(m);
    printf("\nappend at list 1\n");
    append(q);

    printf("\nappend at list 2\n");
    append(m);
    printf("\nlist 1\n");
    display(q);
    printf("\nlist 2\n");
    display(m);
    printf("\nSum\n");
    
    
    add(q,m);
    
    return 0;
}
