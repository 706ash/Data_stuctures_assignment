#include <stdio.h>

// Recursive function to perform binary search
int binarySearch(int arr[], int low, int high, int key) {
    // Base case: If the element is not present in the array
    if (low > high) {
        return -1;
    }

    // Find the middle element
    int mid = low + (high - low) / 2;

    // If the middle element is the key, return its index
    if (arr[mid] == key) {
        return mid;
    }

    // If the middle element is greater than the key, search in the left half
    else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key);
    }

    // If the middle element is smaller than the key, search in the right half
    else {
        return binarySearch(arr, mid + 1, high, key);
    }
}

int main() {
    // Sample array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Element to be searched
    int key = 5;

    // Perform binary search
    int index = binarySearch(arr, 0, n - 1, key);

    // Print the result
    if (index == -1) {
        printf("Element not found in the array.");
    } else {
        printf("Element found at index %d.", index);
    }

    return 0;
}
