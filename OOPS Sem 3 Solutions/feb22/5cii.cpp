#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float num=0.131;
    cout.setf(ios::scientific);
    cout.precision(2);
    cout.fill('*');
    cout.width(13);
    cout<<num<<endl;

}