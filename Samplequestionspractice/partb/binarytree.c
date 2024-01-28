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

struct node* insert()
{
    struct node *root;
    int data,o,left,right;
    printf("\nEnter data(-1 for no data): ");
    scanf("%d",&data);

    if(data==-1)
        return NULL;
    
    root = createanode(data);

    printf("\nEnter the left child of %d",data);
    root->left=insert();

    printf("\nEnter the right child of %d",data);
    root->right=insert();

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
    int con,o;
    do
    {
        printf("\nEnter 1 to insert data in bst\nEnter 2 to display in bst\nEnter choice: ");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            root = insert();
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