#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"\nInside base constructor";
    }
};

class B : public A
{
    public:
    B()
    {
        cout<<"\nInside derived constructor";
    }
};
int main()
{
    B obj;
    return 0;
}