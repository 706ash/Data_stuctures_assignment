#include <stdio.h>
#include <stdlib.h>

// Node structure for circular queue
struct node {
    int data;
    struct node *link;
} *front = NULL, *rear = NULL;

// Function to enqueue an element in the circular queue
void enqueue(int data) {
    struct node *r;
    r = (struct node *)malloc(sizeof(struct node));
    r->data = data;
    r->link = front;

    // If the queue is empty, set both front and rear to the new node
    if (rear == NULL) {
        front = rear = r;
        return;
    }

    // Otherwise, update the rear and link the last node to the new node
    rear->link = r;
    rear = r;
}

// Function to dequeue an element from the circular queue
void dequeue() {
    if (rear == NULL) {
        printf("\nQueue Underflow\n");
        return;
    }

    struct node *temp = front;

    // If there's only one element, set both front and rear to NULL
    if (front == rear) {
        front = NULL;
        rear = NULL;
        free(temp);
        return;
    }

    // Move front to the next node and update the link of the rear
    front = front->link;
    rear->link = front;
    free(temp);
}

// Function to display the elements in the circular queue
void display() {
    if (rear == NULL) {
        printf("\nNULL");
        return;
    }

    struct node *temp = front;
    
    // Traverse and print the elements until the last node is reached
    while (temp != rear) {
        printf("%d--->", temp->data);
        temp = temp->link;
    }
    
    // Print the last element
    printf("%d", rear->data);
}

int main() {
    int choice, operation, data;

    do {
        printf("Enter 1 to enqueue\nEnter 2 to dequeue\n");
        scanf("%d", &operation);

        switch (operation) {
            case 1:
                printf("\nEnter data: ");
                scanf("%d", &data);
                enqueue(data);
                display();
                break;
            case 2:
                dequeue();
                display();
                break;
            default:
                printf("\nWrong choice");
                break;
        }

        printf("\nDo you want to continue (1/0): ");
        scanf("%d", &choice);
    } while (choice == 1);

    return 0;
}
