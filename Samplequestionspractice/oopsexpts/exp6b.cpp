#include <iostream>

using namespace std;

class A
{
    int real,imaginary;
public:
    void get()
    {
        cout<<"\nEnter the real part: ";
        cin>>real;
        cout<<"\nEnter the imaginary: ";
        cin>>imaginary;
    }
    void operator++()
    {
        ++real;
        ++imaginary;
    }

    void operator++(int)
    {
        real++;
        imaginary++;
    }
    
    void display()
    {
        cout<<"\n"<<real<<"+"<<imaginary<<"i";
    }
};
int main()
{
    A obj;
    //preincre
    obj.get();
    ++obj;
    obj.display();
    
    //postincre
    obj.get();
    obj++;
    obj.display();
    
    
    return 0;
}