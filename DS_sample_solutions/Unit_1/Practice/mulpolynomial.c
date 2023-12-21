#include <stdio.h>
#include <stdlib.h>

// Global variable to store the number of terms in the polynomial
int terms;

// Structure to represent a term in a polynomial
struct node
{
    int coeff;
    int exp;
    struct node *link;
} *p, *q, *add;

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
void disp()
{
    struct node *temp = add;
    for (int i = 0; i < terms; i++)
    {
        printf("%dx^%d", temp->coeff, temp->exp);
        if (temp->link != NULL)
            printf(" + ");
        temp = temp->link;
    }
}

// Function to create a polynomial based on user input
struct node* createpolynomial()
{
    struct node *temp, *polynomial = NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the number of terms in the polynomial: ");
    scanf("%d", &terms);
    for (int i = 0; i < terms; i++)
    {
        int coeff = 0, exp = 0;
        printf("\nEnter the coefficient of term %d: ", i + 1);
        scanf("%d", &coeff);
        printf("\nEnter the exponent of term %d: ", i + 1);
        scanf("%d", &exp);
        if (polynomial == NULL)
        {
            polynomial = createanode(coeff, exp);
            temp = polynomial;
        }
        else
        {
            temp->link = createanode(coeff, exp);
            temp = temp->link;
        }
    }
    return polynomial;
}

// Function to multiply two polynomials and display the result
void addpoly()
{
    p = createpolynomial();
    q = createpolynomial();
    struct node *p1 = p, *p2 = q, *temp;

    for (int i = 0; i < terms; i++)
    {
        if (add == NULL)
        {
            add = createanode(p1->coeff * p2->coeff, p1->exp);
            p1 = p1->link;
            p2 = p2->link;
            temp = add;
        }
        else
        {
            temp->link = createanode(p1->coeff * p2->coeff, p1->exp);
            temp = temp->link;
            p1 = p1->link;
            p2 = p2->link;
        }
    }
    disp();
}

int main()
{
    addpoly();
    return 0;
}
