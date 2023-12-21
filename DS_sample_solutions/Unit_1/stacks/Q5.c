//Program for Checking validity of an expression containing nested parenthesis using Stacks.
#include <stdio.h>

#define MAX 100

// Initialize a stack and a top index
char stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(char val) {
    if (top == MAX - 1) {
        printf("Stack is already full. Error!\n");
    } else {
        stack[++top] = val;
    }
}

// Function to pop an element from the stack
char pop() {
    if (top == -1) {
        printf("Stack is empty. Error!\n");
        return -1; // Invalid index
    } else {
        return stack[top--];
    }
}

// Function to check if the expression has balanced parentheses
int areBracketsBalanced(char expr[]) {
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(expr[i]);
        } else if ((stack[top] == '(' && expr[i] == ')') ||
                   (stack[top] == '{' && expr[i] == '}') ||
                   (stack[top] == '[' && expr[i] == ']')) {
            pop();
        } else {
            push(expr[i]);
        }
    }

    return (top == -1); // If stack is empty, expression is balanced
}

int main() {
    char expr[] = "{()}[]"; // Example expression
    if (areBracketsBalanced(expr)) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }
    return 0;
}
