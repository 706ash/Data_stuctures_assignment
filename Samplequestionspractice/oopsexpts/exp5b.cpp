#include <iostream>

using namespace std;
class A
{
    int a;
    int b;
    public:
    A()
    {
        cout<<"\nEnetr value of a and b: ";
        cin>>a>>b;
    }
    friend class B;    
};

class B
{
    public:
    void largest(A obj)
    {
        if(obj.a>obj.a)
            cout<<"\nA is the greatest";
        else
            cout<<"\nb is the greatest";
    }
};

int main()
{
    A obj;
    B object;
    object.largest(obj);
}