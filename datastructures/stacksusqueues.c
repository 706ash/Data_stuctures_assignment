#include<stdio.h>
#include<stdlib.h>
#define MAX 2



void enqueue(int *q,int *pfront,int *prear,int data)
{
    if(*prear==MAX-1)
    {
        printf("\nQueue Overflow");
        return;
    }
    if(*pfront==-1)
    {
        (*pfront)++;
    }
    (*prear)++;
    *(q + *prear)=data;
    

}

void dequeue(int *q,int *pfront,int *prear)
{
    if(*prear==-1)
    {
        printf("\nQueue Underflow");
        return;
    }
    int temp=*(q+*pfront);
    
    printf("\nThe deleted element is: %d",temp);
    if(*pfront==*prear)
    {
        *pfront=*prear=-1;
    }
    else{
        (*pfront)++;
    }
}

void display(int *q1,int *pfront,int *prear)
{
    printf("\n");
    for (int i = *pfront; i <=*prear ; i++)
    {
        printf("%d\t",*(q1+i));
    }
    printf("\n");

    
    
}
int main()
{
    int q1[MAX],q2[MAX],q1front=-1,q1rear=-1,q2front=-1,q2rear=-1;
    int c,o,data;
    do
    {
        printf("Enter 1 to push an element\nEnter 2 to pop an element\n");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            printf("\nEnter data: ");
            scanf("%d",&data);
            enqueue(&q1[0],&q1front,&q1rear,data);
            display(&q1[0],&q1front,&q1rear);
            break;
        case 2:
            dequeue(&q1[0],&q1front,&q1rear);
            if(q1rear!=-1)
                display(&q1[0],&q1front,&q1rear);
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