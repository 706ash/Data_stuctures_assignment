#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the area of a square
int area(int side) {
    return side * side;
}

// Function to calculate the area of a rectangle
float area(float length, float width) {
    return length * width;
}

// Function to calculate the area of a circle
float area(float radius,float pi) {
    return pi * pow(radius, 2);
}

int main() {
    // Example usage of function overloading with direct values
    cout << "Area of the square: " << area(5) << endl;
    cout << "Area of the rectangle: " << area(4.0, 3.0) << endl;
    cout << "Area of the circle: " << area(2.5,3.14) << endl;

    return 0;
}
