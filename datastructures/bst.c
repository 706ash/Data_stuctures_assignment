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

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        preorder(root->left);
        printf("%d\t",root->data);
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
int main()
{
    int data,child,con,o;
    struct node *root=NULL;
    do{
        printf("\nEnter 1 to insert data in the binary search tree\nEnter 2 to display the tranversals\n");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
                printf("\nEnter data to be inserted in bst: ");
                scanf("%d",&child);
                root=insert(child,root);
            break;
        case 2:
                printf("\nPreorder: ");
                preorder(root);
                printf("\nInorder: ");
                inorder(root);
                printf("\nPostorder: ");
                postorder(root);
                break;

        
        default:printf("\nWrong Choice");
            break;
        }
   
    printf("\nDo you want to continue(1/0): ");
    scanf("%d",&con);
    }
    while(con==1);
    return 0;
}