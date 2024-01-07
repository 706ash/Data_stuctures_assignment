// Stacks using arrays

#include <stdio.h>
#define max 3
int stack[max];
int tos=-1;

void push()
{
    int data;
    if(tos==max-1)
    {
        printf("\nStack overflow\n");
        return;
    }
    tos++;
    printf("\nEnter data: ");
    scanf("%d",&stack[tos]);
}

void pop()
{
    if(tos==-1)
    {
        printf("\nStack underflow\n");
        return;
    }
    int data = stack[tos];
    tos--;
    printf("\nElement deleted is %d",data);
}

void display()
{
    for (int i = 0; i <= tos; i++)
        printf("%d\t",stack[i]);
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