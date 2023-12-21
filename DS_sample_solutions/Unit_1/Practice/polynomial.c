#include <stdio.h>
#include <stdlib.h>

// Structure to represent a term in a polynomial
struct node
{
    int coeff;
    int exp;
    struct node *link;
} *q;

// Function to create a new node with given coefficient and exponent
struct node* createanode(int coeff, int exp)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->coeff = coeff;
    temp->exp = exp;
    temp->link = NULL;
    return temp;
}

// Function to display the polynomial
void disp(int terms)
{
    struct node *temp = q;
    for (int i = 0; i < terms; i++)
    {
        printf("%dx^%d", temp->coeff, temp->exp);
        if (temp->link != NULL)
            printf(" + ");
        temp = temp->link;
    }
}

// Function to input and display a polynomial
void polynomial()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    int terms;
    
    // Input the number of terms in the polynomial
    printf("\nEnter the number of terms in the polynomial: ");
    scanf("%d", &terms);

    for (int i = 0; i < terms; i++)
    {
        int coeff = 0, exp = 0;
        
        // Input the coefficient of each term
        printf("\nEnter the coefficient of term %d: ", i + 1);
        scanf("%d", &coeff);
        
        // Input the exponent of each term
        printf("\nEnter the exponent of term %d: ", i + 1);
        scanf("%d", &exp);

        // Create a new node for the term and link it to the polynomial
        if (q == NULL)
        {    
            q = createanode(coeff, exp);
            temp = q;
        }
        else
        {
            temp->link = createanode(coeff, exp);
            temp = temp->link; 
        }
    }

    // Display the polynomial
    disp(terms);
}

int main()
{
    // Call the polynomial function to input and display a polynomial
    polynomial();

    return 0;
}
