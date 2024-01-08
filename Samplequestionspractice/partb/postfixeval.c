#include  <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define max 9
int stack[20];
int tos=-1;

void push(int a)
{
    if(tos==max-1)
    {
        printf("\nStack overflow");
        return;
    }
    tos++;
    stack[tos]=a;
}

int pop()
{
    if(tos==-1)
    {
        printf("\nStack underflow");
        return 0;
    }
    int temp=stack[tos];
    tos--;
    return temp;
}

int main()
{
    int op2,op1,ans;
    char a[20];
    printf("\nEnter the postfix expression ");
    scanf("%s",a);
    for (int i = 0; i < strlen(a); i++)
    {
        if(isdigit(a[i]))
            push(a[i]-'0');
        else
        {
            op2=pop();
            op1=pop();
            switch (a[i])
            {
            case '+':
                ans=op1+op2;
                push(ans);
                break;
            
            case '-':
                ans=op1-op2;
                push(ans);
                break;
            
            case '*':
                ans=op1*op2;
                push(ans);
                break;
            
            case '/':
                ans=op1/op2;
                push(ans);
                break;
            
            case '$':
                ans=pow(op1,op2);
                push(ans);
                break;
            default:
                printf("\noperator not supported");
                break;
            }
        }
    }
    printf("\nAns= %d",ans);
    return 0;    
}