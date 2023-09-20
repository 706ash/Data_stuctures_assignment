#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *q;

void create()
{
    struct node *temp;
    int num;
    printf("\nEnter data: ");
    scanf("%d", &num);

    if (q == NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;
        temp->prev = NULL;
        q = temp;
    }
}
void append()
{
    int num;
    printf("\nEnter data: ");
    scanf("%d", &num);
    struct node *r;
    r = (struct node *)malloc(sizeof(struct node));
    r->data = num;
    q->next = r;
    r->prev = q->next;
    r->next = NULL;
}

void addatbeg()
{
    int num;
    printf("\nEnter data: ");
    scanf("%d", &num);
    struct node *r;
    r = (struct node *)malloc(sizeof(struct node));
    r->data = num;
    r->next = q;
    r->prev = NULL;
    q->prev = r;
    q = r;
}

void addafter()
{
    struct node *temp, *r, *old;
    r = q;
    int num, pos, i;
    printf("\nEnter data: ");
    scanf("%d", &num);
    printf("\nEnter position: ");
    scanf("%d", &pos);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    for (i = 1; i < pos; i++)
    {
        if (r != NULL)
        {
            r = r->next;
        }
    }
    if (r == NULL)
    {
        printf("\nError\n");
        return;
    }
    temp->next = r->next;
    temp->prev = r;
    r->next = temp;
}

void del()
{
    int num;
    struct node *r;
    r = q;
    printf("\nEnter data: ");
    scanf("%d", &num);
    while (r != NULL)
    {
        if (r->data == num)
        {

            if (r == q)
            {
                q = q->next;
            }
            else
            {
                if (r->next != NULL)
                {
                    r->prev->next = r->next;
                    r->next->prev = r->prev;
                    r->next = NULL;
                    r->prev = NULL;
                }
                else
                {
                    r->prev->next = NULL;
                }
            }
            free(r);
            return;
        }
        else
        {
            r = r->next;
        }
    }
    printf("\nNode not found");
}
void display()
{
    struct node *temp = q;
    if (temp == NULL)
    {
        printf("\nNULL\n");
        return;
    }
    while (temp->next != NULL)
    {
        printf("%d<--->", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}

int main()
{
    create();
    display();
    int o;
    int con;
    do
    {
        printf("\nEnter 1 to add a node  at the end of a doubly linked list\nEnter 2 to add a node at the beginning\nEnter 3 to add a node at the given position in a linked list\nEnter 4 to delete a node from a doubly linked list\n");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            append();
            display();
            break;
        case 2:
            addatbeg();
            display();
            break;
        case 3:
            addafter();
            display();
            break;
        case 4:
            del();
            display();
            break;
        default:
            printf("\nWrong choice");
            break;
        }
        printf("\nDo you want to continue(1/0)? ");
        scanf("%d", &con);
    } while (con == 1);

    return 0;
}
