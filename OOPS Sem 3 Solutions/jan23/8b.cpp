#include <iostream>
using namespace std;


class a
{
    public: virtual void function()
    {
        cout<<"\nInside base class";
    }
};

class b: public a
{
    public: void function()
    {
        cout<<"\nInside derived class";
    }
};

int main()
{
    b object;
    object.function();
    return 0;
}