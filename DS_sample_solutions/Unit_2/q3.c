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

// Function to multiply two polynomials
struct Node *multiplyPolynomials(struct Node *poly1, struct Node *poly2) {
    struct Node *result = NULL;
    struct Node *currentResult = NULL;

    while (poly1 != NULL) {
        struct Node *tempPoly2 = poly2;
        while (tempPoly2 != NULL) {
            struct Node *newTerm = (struct Node *)malloc(sizeof(struct Node));
            if (!newTerm) {
                printf("Memory allocation failed. Exiting.\n");
                exit(1);
            }

            // Multiply coefficients and add exponents for each term
            newTerm->coefficient = poly1->coefficient * tempPoly2->coefficient;
            newTerm->exponent = poly1->exponent + tempPoly2->exponent;

            newTerm->next = NULL;
            if (result == NULL) {
                result = newTerm;
                currentResult = newTerm;
            } else {
                currentResult->next = newTerm;
                currentResult = newTerm;
            }

            tempPoly2 = tempPoly2->next;
        }

        poly1 = poly1->next;
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

    struct Node *product = multiplyPolynomials(poly1, poly2);
    printf("Product of the polynomials: ");
    show(product);

    // Memory cleanup part removed

    return 0;
}
