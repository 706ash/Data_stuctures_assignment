#include <iostream>

// Define the base class 'shape'
class shape {
public:
    // Pure virtual function to compute the area of any geometrical shape
    virtual float area() = 0;
};

// Derived class 'rectangle' from the base class 'shape'
class rectangle : public shape {
private:
    float length, width;

public:
    // Implementation of the 'area()' function for rectangles
    float area() {
        return length * width;
    }

    // Setter function for length and width
    void setDimensions(float len, float wid) {
        length = len;
        width = wid;
    }
};

// Derived class 'circle' from the base class 'shape'
class circle : public shape {
private:
    float radius;

public:
    // Implementation of the 'area()' function for circles
    float area() {
        return 3.14 * radius * radius;
    }

    // Setter function for the radius
    void setRadius(float rad) {
        radius = rad;
    }
};

using namespace std;

int main() {
    // Create an instance of the 'rectangle' class
    rectangle rect;
    rect.setDimensions(5.0, 3.0);

    // Display the area of the rectangle
    cout << "Area of rectangle: " << rect.area() << endl;

    // Create an instance of the 'circle' class
    circle circ;
    circ.setRadius(4.0);

    // Display the area of the circle
    cout << "Area of circle: " << circ.area() << endl;

    return 0;
}
