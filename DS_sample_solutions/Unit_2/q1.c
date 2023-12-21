#include <stdio.h>
#include <stdlib.h>

// Define a structure for each term in the polynomial
struct Node {
    int coefficient;  // Coefficient of the term
    int exponent;     // Exponent of the term
    struct Node *next;  // Pointer to the next term
};

// Function to create the polynomial linked list
void create() {
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

    // Display the polynomial (optional)
    printf("Polynomial representation using linked list:\n");
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coefficient, temp->exponent);
        if (temp->next != NULL) {
            printf(" + ");
        }
        temp = temp->next;
    }
    printf("\n");

    // Clean up memory (optional)
    temp = head;
    while (temp != NULL) {
        struct Node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
}

int main() {
    create();  // Call the create function
    return 0;
}
