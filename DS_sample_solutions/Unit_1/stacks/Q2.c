//To implement stacks using linked lists
#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *link;
}*tos=NULL; //tos is top of stack which does not point to any node initially

void push()
{
int num;
printf("\nEnter data: ");
scanf("%d",&num);
struct node *r;
r=(struct node *)malloc(sizeof(struct node)); //allocates memory to node pointed by r
r->data=num;
r->link=tos;
tos=r;
}
void pop()
{
struct node *temp=tos; //point temp yo top of stack
if(tos!=NULL) // if the stack is not empty
{
tos=tos->link;
free(temp);
}
else
{
printf("\nStack underflow");
}
}
void display()
{
struct node *temp=tos;
while(temp!=NULL)
{
printf("%d--->",temp->data);
temp=temp->link;
}
printf("NULL");
}
int main()
{
int o;
int con;
do
{
printf("\nEnter 1 to push a element in a stack\nEnter 2 to pop anelement in a stack\n");
scanf("%d",&o);
switch(o)
{
case 1:push();
display();
break;
case 2 :pop();
display();
break;
default: printf("\nWrong choice");
break;
}
printf("\nDo you want to continue(1/0)? ");
scanf("%d",&con);
}
while(con==1);
return 0;
}