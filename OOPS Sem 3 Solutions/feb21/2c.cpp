#include <iostream>
using namespace std;

int area(int a)
{
    return a*a;
}

int area(int a,int b)
{
    return 0.5*a*b;
}

float area(float a,float b)
{
    return a*b;
}

int main()
{
    cout<<"square: "<<area(5)<<endl;
    cout<<"triangle: "<<area(6,9)<<endl;
    cout<<"rectangle: "<<area((float)4.6,(float)8.4);
    return 0;
}
