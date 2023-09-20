#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 9
char stack[MAX],tos=-1;

void push(char a)
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
    char item=stack[tos];
    tos--;
    return item;
    
}
int main()
{
    int n,op2,op1,ans,sprecedence,eprecedence;
    char eval[100];
    printf("\nEnter the infix expression: ");
    scanf("%s",eval);
    n = strlen(eval);
    for(int i=0;i<n;i++)
    {
        if(isdigit(eval[i]))
        {
            printf("%d",eval[i]-'0');
        }
        else if(isalpha(eval[i]))
        {
            printf("%c",eval[i]);
        }
        else
        {
            if(eval[i]=='(')
            {
                push(eval[i]);
            }
            else if(eval[i]==')')
            {
                while(stack[tos]!='(')
                {
                    pop();
                }
                pop();
            }
            else
            {
            
            if(stack[tos]=='$')
            {
                sprecedence=3;
            }
            else if(stack[tos]=='*' || stack[tos]=='/')
            {
                sprecedence=2;
            }
            else if(stack[tos]=='+' || stack[tos]=='-')
            {
                sprecedence=1;
            }
            if(eval[i]=='$')
            {
                eprecedence=3;
            }
            else if(eval[i]=='*' || eval[i]=='/')
            {
                eprecedence=2;
            }
            else if(eval[i]=='+' || eval[i]=='-')
            {
                eprecedence=1;
            }
            if(eprecedence<=sprecedence)
            {
            while(eprecedence<=sprecedence)
            {
                printf("%c",pop());
            }
            push(eval[i]);
            }
            else
            {
                push(eval[i]);
            }
            }

        }
    }
    while(tos!=-1)
    {
        printf("%c",pop());
        
    }
    printf("\n");
}