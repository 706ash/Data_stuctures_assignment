#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};

struct node *make_a_node(int child) //Function to make a ,node insert data to that node and return a pointer to that node
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=child;
    return temp;
}
struct node* insert(int child,struct node *root) // function to recursively transverse and insert data in a binary search tree
{
    if(root==NULL) //if the present root node does not exist then make one
    {
        root = make_a_node(child);
        return root;
    }
   else if (child < root->data)
   {
        root->left=insert(child,root->left);
   }
   else if (child > root->data)
   {
        root->right=insert(child,root->right);
   }
   return root;
}

void preorder(struct node *root)
{
    if(root!=NULL)    
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }    
}
int main()
{
    int data,child,con;
    struct node *root=NULL;
    do{
    printf("\nEnter data to be inserted in bst: ");
    scanf("%d",&child);
    root=insert(child,root);
    printf("\nDo you want to continue(1/0): ");
    scanf("%d",&con);
    }
    while(con==1);
    preorder(root);
    return 0;
}