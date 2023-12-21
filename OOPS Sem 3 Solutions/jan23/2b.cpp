#include<iostream>
using namespace std;

class B;
// Class A with a single integer data member
class A {
    int a;
public:
    // Constructor to input the value of 'a'
    A() {
        cout << "\nEnter the number a: ";
        cin >> a;
    }
    friend void swap(A &objectfromA, B &objectfromB);
};

// Class B with a single integer data member
class B {
    int b;

public:
    // Constructor to input the value of 'b'
    B() {
        cout << "\nEnter the number b: ";
        cin >> b;
    }

    // Friend function declaration for swapping data members of A and B
    friend void swap(A &objectfromA, B &objectfromB);
};

// Friend function definition to swap data members of A and B
void swap(A &objectfromA, B &objectfromB) {
    cout << "\nInitially a=" << objectfromA.a << " b=" << objectfromB.b;

    // Swapping data members using a temporary variable
    int t = objectfromA.a;
    objectfromA.a = objectfromB.b;
    objectfromB.b = t;

    cout << "\nAfter swapping \na=" << objectfromA.a << "\nb=" << objectfromB.b;
}

int main() {
    cout << "\t\tFRIEND FUNCTION AND FRIEND CLASS\n";
    cout << "------------------------------------------------------------------------\n\n";
    
    // Creating objects of classes A and B
    A O1;
    B O2;

    // Calling the friend function to swap data members
    swap(O1, O2);

    return 0;
}
