//string reversal

#include <stdio.h>
#include <string.h>

#define max 3
char stack[max];
int tos=-1;

void push(char a)
{
    if(tos==max-1)
    {
        printf("\nStack overflow\n");
        return;
    }
    tos++;
    stack[tos]=a;
}

void pop()
{
    if(tos==-1)
    {
        printf("\nStack underflow\n");
        return;
    }
    char a = stack[tos];
    tos--;
    printf("%c",a);
}
int main()
{
    char string[10];
    printf("\nEnter string: ");
    scanf("%s",string);
    for (int i = 0; i < strlen(string); i++)
    {
        push(string[i]);
    }
    while(tos!=-1)
        pop();
}