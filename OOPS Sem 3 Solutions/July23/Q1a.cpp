#include <iostream>

using namespace std;

int main() {
  int n;

  // Get the number of elements from the user
  cout << "Enter the number of elements: ";
  cin >> n;

  // Create an array to store the elements
  int arr[n];

  // Get the elements from the user
  for (int i = 0; i < n; ++i) {
    cout << "Enter element " << i + 1 << ": ";
    cin >> arr[i];
  }

  // Sort the array using bubble sort
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  // Display the sorted elements
  cout << "Sorted elements: ";
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}