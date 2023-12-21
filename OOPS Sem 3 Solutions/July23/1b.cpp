#include <iostream>

using namespace std;

// Class definition for 'atype'
class atype {
    int a[3]; // Private integer array

public:
    // Constructor to initialize the array elements
    atype(int i, int j, int k) {
        a[0] = i;
        a[1] = j;
        a[2] = k;
    }

    // Overloaded operator[] to access array elements
    int operator[](int i) {
        return a[i];
    }
};

// Main function
int main() {
    // Create an object 'ob' of type 'atype' with values 1, 2, and 3
    atype ob(1, 2, 3);

    // Display the value at index 1 of the array using overloaded operator[]
    cout << ob[1]; // displays 2

    return 0;
}
