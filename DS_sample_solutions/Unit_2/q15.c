#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the binary search tree
struct node
{
    int data;
    struct node *left, *right;
};

// Function to create a new node with the given data
struct node *make_a_node(int child)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = child;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to recursively insert data into a binary search tree
struct node *insert(int child, struct node *root)
{
    if (root == NULL)
    {
        // If the present root node does not exist, then create a new node
        root = make_a_node(child);
        return root;
    }
    else if (child < root->data)
    {
        // If the data is less than the root's data, then go to the left subtree
        root->left = insert(child, root->left);
    }
    else if (child > root->data)
    {
        // If the data is greater than the root's data, then go to the right subtree
        root->right = insert(child, root->right);
    }
    return root;
}

// Function to perform preorder traversal of the binary search tree
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Function to perform inorder traversal of the binary search tree
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}

// Function to perform postorder traversal of the binary search tree
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
    }
}

int main()
{
    int data, child, con, o;
    struct node *root = NULL;

    do
    {
        printf("\nEnter 1 to insert data in the binary search tree\nEnter 2 to display the traversals\n");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            printf("\nEnter data to be inserted in bst: ");
            scanf("%d", &child);
            root = insert(child, root);
            break;

        case 2:
            printf("\nPreorder: ");
            preorder(root);
            printf("\nInorder: ");
            inorder(root);
            printf("\nPostorder: ");
            postorder(root);
            break;

        default:
            printf("\nWrong Choice");
            break;
        }

        printf("\nDo you want to continue (1/0): ");
        scanf("%d", &con);
    } while (con == 1);

    return 0;
}
