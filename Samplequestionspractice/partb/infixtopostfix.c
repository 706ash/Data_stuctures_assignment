#include  <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define max 9
char stack[20];
int tos=-1;

void push(char a)
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
    char temp=stack[tos];
    tos--;
    return temp;
}

int precedence(char a)
{
    switch (a)
    {
    case '$':
        return 3;
    
    case '*':
        return 2;

    case '/':
        return 2;

    case '+':
        return 1;
    
    case '-':
        return 1;
    
    case '(':
        return 0;
    
    case ')':
        return 0;
    }
}
int main()
{
    int op2,op1,ans;
    char a[20];
    printf("\nEnter the expression: ");
    scanf("%s",a);
    printf("\n");
    for (int i = 0; i < strlen(a); i++)
    {
        if(isdigit(a[i]))
            printf("%c",a[i]);
        else
        {
            if(a[i]=='(')
                push(a[i]);
            else if (a[i]==')')
            {   while(stack[tos]!='(')
                {
                    printf("%c",pop());
                }
                pop();
            }
            else if(precedence(a[i])>precedence(stack[tos]) || tos==-1)
                push(a[i]);
            else
            {
                while (precedence(a[i])<=precedence(stack[tos]) && tos!=-1)
                {
                    printf("%c",pop());
                }
                push(a[i]);

            }
        }
    }
    while (tos!=-1)
    {
        printf("%c",pop());
    }
    
    return 0;    
}