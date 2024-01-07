// Queues using arrays

#include <stdio.h>
#define max 3

void enqueue(int *prear,int *pfront,int data,int *a)
{
    if(*prear==max-1)
    {
        printf("\nQueue overflow");
        return;
    }
    if(*prear==-1)
        *prear=*pfront=0;
    else
        (*prear)++;
    a[*prear]=data;
}

void dequeue(int *prear,int *pfront,int *a)
{
    if(*pfront== -1)
    {
        printf("\nQueue underflow");
        return;
    }
    int data= a[*pfront];
    if(*pfront==*prear)
    {
        *pfront=*prear=-1;
    }
    else
        (*pfront)++;
    printf("\nElememt deleted is %d",data);
}

void display(int *prear,int *pfront,int *a)
{
    printf("\n");
    for (int  i = *pfront; i <= *prear; i++)
    {
        printf("%d\t",a[i]);
    }    
}

int main()
{
    int choice,con,rear=-1,front=-1,data,a[max];
    do{
        printf("\nEnter 1 to enqueue an elemnt\nEnter 2 to dequeue\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nenter data: ");
            scanf("%d",&data);
            enqueue(&rear,&front,data,&a[0]);
            display(&rear,&front,&a[0]);
            break;
        
        case 2:
            dequeue(&rear,&front,&a[0]);
            if(rear!=-1)
                display(&rear,&front,&a[0]);
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