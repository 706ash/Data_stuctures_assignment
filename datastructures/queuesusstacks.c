#include <stdio.h>
#define MAX 3

void push(int *stack,int data,int *tos)
{
    if(*tos==MAX-1)
    {
        printf("\nStack Overflow\n");
        return;
    }
    (*tos)++;
    *(stack+*tos)=data;
}

int pop(int *stack,int *tos)
{
    int temp=*(stack+*tos);
    (*tos)--;
 
    return temp;
}

void display(int *stack,int *tos)
{
    for (int i = 0; i <= *tos; i++)
    {
        printf("%d\t",*(stack+i));
    }
    
}
int main()
{
    int s1[MAX],s2[MAX],tos1=-1,tos2=-1;
    int c,o,data;
    do
    {
        printf("Enter 1 to enqueue\nEnter 2 to dequeue\n");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            printf("\nEnter data: ");
            scanf("%d",&data);
            push(&s1[0],data,&tos1);
            display(&s1[0],&tos1);
            break;
        case 2:
            for(int i = 0;i<tos1;i++)
            {
                push(&s2[0],pop(&s1[0],&tos1),&tos2);
            }
            pop(&s1[0],&tos1);
            for(int i = 0;i<=tos2;i++)
            {
                push(&s1[0],pop(&s2[0],&tos2),&tos1);
            }
            if(tos1!=-1)
                {display(&s1[0],&tos1);}
            else{printf("\nStack Underflow\n");}
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

