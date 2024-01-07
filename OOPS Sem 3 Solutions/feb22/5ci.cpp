#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double number = 1.4321;
    cout.setf(ios::showpoint);
    cout.width(12);
    // Set field width to 12, left-justify, and use fixed-point notation
    cout<< left<<number << endl;
    return 0;
}
