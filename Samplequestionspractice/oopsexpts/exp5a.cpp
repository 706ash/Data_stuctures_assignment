#include <iostream>
using namespace std;

class B;
class A
{
    int a;
    public: 
    A()
    {
        cout<<"\nEnter value of a: ";
        cin>>a;
    }
    friend void swap(A &objfroma,B &objfromb);
};

class B
{
    int b;
    public:
    B()
    {
        cout<<"\nEnter value of b: ";
        cin>>b;
    }
    friend void swap(A &objfroma,B &objfromb);
};

void swap(A &objfroma,B &objfromb)
{
    int t=objfroma.a;
    objfroma.a=objfromb.b;
    objfromb.b=t;
    cout<<"\na= "<<objfroma.a<<" b= "<<objfromb.b;
}

int main()
{
    A o1;
    B o2;
    swap(o1,o2);
}