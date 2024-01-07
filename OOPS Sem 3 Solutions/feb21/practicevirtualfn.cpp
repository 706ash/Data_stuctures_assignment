#include <iostream>
using namespace std;

class A
{
    public:
    virtual void print()
    {
        cout<<"\nInside base class print";
    }
    void show()
    {
        cout<<"\nInside base class show";
    }
};

class B : public A
{
    public:
    void print()
    {
        cout<<"\nInside derived class print";
    }
    void show()
    {
        cout<<"\nInside deived class show";
    }
};
int main()
{
    A *bptr;
    B obj;
    bptr=&obj;
    bptr->print();
    bptr->show();
    return 0;
}