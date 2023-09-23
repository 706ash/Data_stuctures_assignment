#include<stdio.h>
#define MAX 9
int q1[MAX],q2[MAX],*q1front=NULL,*q1rear=NULL;

void enqueue()
{
    if(q1front==NULL)
    {
        q1front=q1rear=&q1[0];
    }
    else
    {
        q1rear++;
    }
    int data;
    printf("\nEnter data: ");
    scanf("%d",&*q1rear);
}
void display()
{
    int *front;
    front=q1front;
    if(front=q1rear)
    {
        printf("%d",*front);
        return;
    }
    while (front!=q1rear)
    {
        printf("%d",*front);
        front++;
    }
    
}
int main()
{
    int c;
    int o;
    do
    {
        printf("Enter 1 to push an element\nEnter 2 to pop an element");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            enqueue();
            display();
            break;
        
        
        default:
            printf("\nWrong choice");
            break;
        }
        printf("\nDo you want to comtinue(1/0): ");
        scanf("%d",&c);
    } while (c==1);
    return 0;
}