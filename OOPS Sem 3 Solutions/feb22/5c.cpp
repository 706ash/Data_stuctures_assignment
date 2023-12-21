#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //i
    cout<<setfill('0')<<setw(12)<<setiosflags(ios::left)<<"1.4321";
    //ii
    cout<<endl<<setfill('*')<<setw(14)<<setiosflags(ios::right)<<"1.31e-001";
    //iii
    cout<<endl;
    cout.width(15); // Set field width to 15
cout.fill('*'); // Fill unused space with asterisks
cout.setf(ios::fixed, ios::floatfield); // Use fixed-point notation with 2 decimal places
cout.setf(ios::showpos); // Show plus sign for positive numbers
cout << 3.2; // Output the integer value

    return 0;
}