
#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
}*q=NULL;


void create() {
	struct node* temp;
	int num;
	printf("\nEnter data:");
	scanf("%d", &num);
	if (q == NULL) {
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data = num;
		temp->next = temp;
		q = temp;
	}
}

void ins_at_beg() {
	struct node* temp, * r;
	int num;
	printf("\nEnter the data:");
	scanf("%d", &num);
	temp = q;
	while (temp->next != q) {
		temp = temp->next;
	}
	r = (struct node*)malloc(sizeof(struct node));
	r->data = num;
	r->next = q;
	temp->next = r;
	q=r;
}

void ins_at_pos() {
	int num, pos;
	struct node* temp, * r = q;
	printf("\nEnter the data:");
	scanf("%d", &num);
	printf("\Enter the position:");
	scanf("%d", &pos);
	for (int i = 0; i < pos; i++) {
		if(r->next != q) {
			r = r->next;
		}
		else {
			printf("\nPOS NOT FOUND");
		}
	}
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = r->next;
	r->next = temp;
}

void del_at_beg() {
	struct node* temp = q, * r = q;
	while (r->next != q) { 
		r = r->next;
	}
	if(q != NULL && q->next != q) {
		q = q->next;
	}
	else {
		q = NULL;
	}
	free(temp);
	r->next = q;
	return;
}

void del_at_pos() {
	struct node* temp = q, * old = NULL;
	int pos, i;
	printf("\nEnter the position:");
	scanf("%d", &pos);

	for (i = 1; i <= pos; i++) {
		if (temp->next != q) {
			old = temp;
			temp = temp->next;
		}
		else {
			printf("\nPOS NOT FOUND");
			return;
		}
	}

	if (temp != q) {
		old->next = temp->next;
	}
	else {
		q = q->next;  // Update the head if the first node is deleted
	}

	free(temp);
	return;
}

void traverse() {
	struct node* temp;
	temp = q;
	if (q == NULL) {
		printf("\nList is empty");
	}
	else {
		do {
			printf("%d->", temp->data);
			temp = temp->next;
		} while (temp != q);

		printf("\n"); // Add a newline after the last node
	}
}
int main() {
	int n;
	char c;
	do {
		printf("\n\nMENU:\n1)Create 2)ins at beg 3)ins at pos 4)del at beg 5)Del at pos 6)Display 7)Exit");
		scanf("%d", &n);
		switch (n) {
		case 1:
			create();
			break;
		case 2:
			ins_at_beg();
			break;
		case 3:
			ins_at_pos();
			break;
		case 4:
			del_at_beg();
			break;
		case 5:
			del_at_pos();
			break;
		case 6:
			traverse();
			break;
		case 7:
			printf("\nExiting program");
			break;
		default:
			printf("\nERROR");
		}
		printf("Do you still wanna cont(y/n)");
		scanf(" %c", &c);
	} while (c == 'y' || c == 'Y');

	return 0;
}
