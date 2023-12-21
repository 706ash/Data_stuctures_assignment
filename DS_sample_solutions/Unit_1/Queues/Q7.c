#include <stdio.h>
#include <string.h>

// Function to enqueue a character
void enqueue(char queue[], int* rear, char c) {
    queue[++(*rear)] = c;
}

// Function to dequeue a character
char dequeue(char queue[], int* front) {
    return queue[(*front)++];
}

// Function to check if the string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    char queue[length], stack[length];
    int front = 0, rear = -1, top = -1;

    // Enqueue and push letters (ignoring non-letter characters)
    for (int i = 0; i < length; i++) {
        char ch = str[i];
        if (isalpha(ch)) {
            ch = tolower(ch); // Convert to lowercase
            enqueue(queue, &rear, ch);
            stack[++top] = ch;
        }
    }

    // Compare characters from queue and stack
    while (front <= rear && top >= 0) {
        char fromQueue = dequeue(queue, &front);
        char fromStack = stack[top--];
        if (fromQueue != fromStack)
            return 0; // Not a palindrome
    }

    return 1; // Palindrome
}

int main() {
    char str[] = "abbba"; // Example string
    if (isPalindrome(str))
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is NOT a palindrome.\n", str);

    return 0;
}
