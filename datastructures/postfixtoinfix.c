#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 9
int stack[MAX],tos=-1;

void push(int a)
{
    if(tos==MAX-1)
    {
        printf("\nStack overflow");
        
    }
    tos++;
    stack[tos]=a;

}

int pop()
{
    if(tos==-1)
    {
        printf("\nStack underflow");
        
    }
    int item=stack[tos];
    tos--;
    return item;
    
}
int main()
{
    int n,op2,op1,ans;
    char eval[100];
    printf("Enter the size of the postfix expression: ");
    scanf("%d",&n);
    printf("\nEnter the postfix expression: ");
    scanf("%s",eval);
    for(int i=0;i<n;i++)
    {
        if(isdigit(eval[i])!=0)
        {
            push(eval[i]-'0');
        }
        else
        {
            op2=pop();
            op1=pop();
            if(eval[i]=='+')
            {
                ans=op1+op2;
                push(ans);
            }
            else if(eval[i]=='-')
            {
                ans=op1-op2;
                push(ans);
            }
            else if(eval[i]=='*')
            {
                ans=op1*op2;
                push(ans);
            }
            else if(eval[i]=='/')
            {
                ans=op1/op2;
                push(ans);
            }
            else if(eval[i]=='$')
            {
                ans=pow(op1,op2);
                push(ans);
            }
        }
    }
    ans=pop();
    printf("%d",ans);
    printf("\n");
}