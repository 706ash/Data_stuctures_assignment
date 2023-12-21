#include <stdio.h>
#include <stdlib.h>

// Define a structure for each term in the polynomial
struct Node {
    int coefficient;  // Coefficient of the term
    int exponent;     // Exponent of the term
    struct Node *next;  // Pointer to the next term
};

// Function to create the polynomial linked list
struct Node *create() {
    struct Node *head = NULL;  // Initialize an empty linked list
    struct Node *current = NULL;  // Pointer to the current node
    int numTerms;

    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &numTerms);

    // Input coefficients and exponents for each term
    for (int i = 0; i < numTerms; i++) {
        struct Node *newTerm = (struct Node *)malloc(sizeof(struct Node));
        if (!newTerm) {
            printf("Memory allocation failed. Exiting.\n");
            exit(1);
        }

        printf("Enter the coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &newTerm->coefficient, &newTerm->exponent);
        newTerm->next = NULL;

        // Add the new term to the linked list
        if (head == NULL) {
            head = newTerm;
            current = newTerm;
        } else {
            current->next = newTerm;
            current = newTerm;
        }
    }

    return head;  // Return the head of the linked list
}

// Function to add two polynomials
struct Node *addPolynomials(struct Node *poly1, struct Node *poly2) {
    struct Node *result = NULL;
    struct Node *current = NULL;

    while (poly1 != NULL || poly2 != NULL) {
        struct Node *newTerm = (struct Node *)malloc(sizeof(struct Node));
        if (!newTerm) {
            printf("Memory allocation failed. Exiting.\n");
            exit(1);
        }

        if (poly1 == NULL) {
            newTerm->coefficient = poly2->coefficient;
            newTerm->exponent = poly2->exponent;
            poly2 = poly2->next;
        } else if (poly2 == NULL) {
            newTerm->coefficient = poly1->coefficient;
            newTerm->exponent = poly1->exponent;
            poly1 = poly1->next;
        } else {
            newTerm->coefficient = poly1->coefficient + poly2->coefficient;
            newTerm->exponent = poly1->exponent;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }

        newTerm->next = NULL;
        if (result == NULL) {
            result = newTerm;
            current = newTerm;
        } else {
            current->next = newTerm;
            current = newTerm;
        }
    }

    return result;  // Return the head of the result polynomial
}

// Function to display a polynomial
void show(struct Node *node) {
    while (node != NULL) {
        printf("%dx^%d", node->coefficient, node->exponent);
        if (node->next != NULL) {
            printf(" + ");
        }
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node *poly1 = create();
    struct Node *poly2 = create();

    printf("1st Polynomial: ");
    show(poly1);
    printf("2nd Polynomial: ");
    show(poly2);

    struct Node *sum = addPolynomials(poly1, poly2);
    printf("Sum of the polynomials: ");
    show(sum);

    // Clean up memory (optional)
    while (poly1 != NULL) {
        struct Node *temp = poly1;
        poly1 = poly1->next;
        free(temp);
    }
    while (poly2 != NULL) {
        struct Node *temp = poly2;
        poly2 = poly2->next;
        free(temp);
    }
    while (sum != NULL) {
        struct Node *temp = sum;
        sum = sum->next;
        free(temp);
    }

    return 0;
}
