#include <iostream>
#include <iomanip>

using namespace std; // Use the namespace std

int main() {
    double number = 12.34;

    // Set scientific format with 2 digits after the decimal point
    cout.setf(ios::scientific);
    cout.precision(2);

    // Output the formatted number
    cout <<setfill('*')<<setw(13)<< number << endl;

    return 0;
}
