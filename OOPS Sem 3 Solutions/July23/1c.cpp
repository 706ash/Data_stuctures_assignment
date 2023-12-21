#include <iostream>
using namespace std;

// Forward declaration of the Min class since it's used in the TwoValues class.
class Min;

// Class definition for TwoValues
class TwoValues {
    int a;
    int b;

public:
    TwoValues(int i, int j) {
        a = i;
        b = j;
    }

    // Allowing the Min class to access private members of TwoValues as it is a friend class.
    friend class Min;
};

// Class definition for Min
class Min {
public:
    // Function to find the minimum of two values in the TwoValues class.
    int min(TwoValues x);
};

// Implementation of the min function in the Min class
int Min::min(TwoValues x) {
    // Using the friend access to the private members of TwoValues
    return x.a < x.b ? x.a : x.b;
}

// Main function
int main() {
    // Creating an object of TwoValues class
    TwoValues ob(10, 20);

    // Creating an object of Min class
    Min m;

    // Displaying the minimum value using the Min class
    cout << "Minimum value: " << m.min(ob) << endl;

    return 0;
}
