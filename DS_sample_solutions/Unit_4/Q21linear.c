#include <stdio.h>

// Function to perform linear search
void linearsearch(int *a, int l) {
    int key;
    printf("\nEnter the element to be searched in the array: ");
    scanf("%d", &key);

    // Iterate through the array to find the key
    for (int i = 0; i < l; i++) {
        if (a[i] == key) {
            printf("\nElement found at location %d", i + 1);
            return; // Exit the function if the element is found
        }
    }

    // If the loop completes without finding the element
    printf("\nElement not found");
}

int main() {
    int a[10], l;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &l);

    // Input the elements in ascending order
    printf("Enter the elements in ascending order: ");
    for (int i = 0; i < l; i++)
        scanf("%d", &a[i]);

    // Call the linear search function
    linearsearch(&a[0], l);

    return 0;
}
