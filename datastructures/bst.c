#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};

struct node* insert(int parent,int child,struct node *root)
{
    struct node *temp;
    if(child<parent)
    {
        if(root->left==NULL)
        {
            temp=(struct node *)malloc(sizeof(struct node));
            temp->data=child;
            root->left=temp;
            return temp;
        }
        root=root->left;
        root->left=insert(root->data,child,root);
        
    }
    else
    {
        if(root->right==NULL)
        {
            temp=(struct node *)malloc(sizeof(struct node));
            temp->data=child;
            root->right=temp;
            return temp;
        }
        root=root->right;
        root->right=insert(root->data,child,root);
        
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
    printf("\nEnter data to be inserted in root node: ");
    scanf("%d",&data);
    root=(struct node *)malloc(sizeof(struct node));
    root->data=data;
    do{
    printf("\nEnter data to be inserted in bst: ");
    scanf("%d",&child);
    if(child < data)
    {
        root->left=insert(data,child,root);
    }
    else
    {
        root->right=insert(data,child,root);
    }
    printf("\nDo you want to continue(1/0): ");
    scanf("%d",&con);
    }
    while(con==1);
    preorder(root);
    return 0;
}