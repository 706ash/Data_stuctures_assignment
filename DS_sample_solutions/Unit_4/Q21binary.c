#include <stdio.h>
#include <conio.h>

// Function to perform binary search on a sorted array
void binarysearch(int *arr, int n) {
    int key, l = 0, h = n - 1, mid;

    // Taking input for the element to be searched
    printf("\nEnter the element to be searched in the array: ");
    scanf("%d", &key);

    // Binary search algorithm
    while (l <= h) {
        mid = (l + h) / 2;

        // If the key is found at the middle position
        if (key == arr[mid]) {
            printf("\nElement found at position %d", mid + 1);
            return;
        }
        // If the key is smaller, search in the left half
        else if (key < arr[mid]) {
            h = mid - 1;
        }
        // If the key is larger, search in the right half
        else if (key > arr[mid]) {
            l = mid + 1;
        }
    }

    // If the element is not found
    printf("\nElement not found");
}

// Main function
void main() {
    int n, arr[100];

    // Taking input for the number of elements in the array
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    // Taking input for the array elements in ascending order
    printf("\nEnter the array elements in ascending order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calling the binary search function
    binarysearch(&arr[0], n);

    // Waiting for a key press before closing the console
    getch();
}
