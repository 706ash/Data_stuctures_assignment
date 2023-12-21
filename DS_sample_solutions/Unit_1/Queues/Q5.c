#include <stdio.h>
#include <stdlib.h>

int count = 0;

struct node {
    int data;
    struct node* link;
} *front = NULL, *rear = NULL;

void enqueue() {
    int num;
    printf("\nEnter data: ");
    scanf("%d", &num);

    struct node* r;
    r = (struct node*)malloc(sizeof(struct node));
    r->data = num;
    r->link = NULL;

    if (count == 0) {
        front = r;
        rear = r;
        count++;
    } else {
        rear->link = r;
        rear = r;
    }
}

void dequeue() {
    struct node* temp = front;

    if (front == NULL) {
        printf("\nQueue Underflow");
        return;
    }

    if (front != rear) {
        front = front->link;
    } else {
        front = NULL;
        rear = NULL;
    }

    free(temp);
    count--;
}

void display() {
    struct node* temp;
    temp = front;

    while (temp != NULL) {
        printf("%d--->", temp->data);
        temp = temp->link;
    }

    printf("NULL\n");
}

int main() {
    int o;
    int con;

    do {
        printf("\nEnter 1 to enqueue\nEnter 2 to dequeue\n");
        scanf("%d", &o);

        switch (o) {
            case 1:
                enqueue();
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

        printf("\nDo you want to continue (1/0)? ");
        scanf("%d", &con);
    } while (con == 1);

    return 0;
}
