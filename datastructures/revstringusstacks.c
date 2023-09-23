#include <stdio.h>
#include<string.h>
#define MAX 10
char stack[MAX];
int tos=-1;

void push(char letter)
{
    if(tos==MAX-1)
    {
        printf("\nStack Overflow\n");
        return;
    }
    (tos)++;
    stack[tos]=letter;
}

void pop()
{
    if(tos==-1)
    {
        printf("\nStack Uderflow\n");
        return;
    }
    char letter=stack[tos];
    tos--;
    printf("%c",letter);
 
   
}
int main()
{
char c;
    printf("Enter the string you want to reverse: ");
    while(c!='\n')
    {
        scanf("%c",&c);
        push(c);
    }
    while(tos!=-1)
    {
        pop();
    }
    printf("\n");
    return 0;
}

