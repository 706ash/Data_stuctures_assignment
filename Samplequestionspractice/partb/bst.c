#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};

struct node* createanode(int child)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=child;
    temp->left=NULL;
    temp->right=NULL;
    return temp;    
}

struct node* insert(struct node *root,int child)
{
    if(root==NULL)
    {
        root=createanode(child);
        return root;
    }
    else if(root->data>child)
        root->left=insert(root->left,child);
    else if(root->data<child)
        root->right=insert(root->right,child);
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

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);        
    }
}

int main()
{   
    struct node *root=NULL;
    int con,o,child;
    do
    {
        printf("\nEnter 1 to insert data in bst\nEnter 2 to display in bst\nEnter choice: ");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            printf("\nEnter data: ");
            scanf("%d",&child);
            root = insert(root,child);
            break;
        
        case 2:
            printf("\nPreorder: ");
            preorder(root);
            printf("\nPostorder: ");
            postorder(root);
            printf("\nInorder: ");
            inorder(root);
            break;
        default:
            break;
        }
        printf("\ndo you want to continue(1/0): ");
        scanf("%d",&con);
    } while (con==1);
    return 0;
}