#include <iostream>
using namespace std;
class a
{
    public:
    a()
    {
        cout<<"\nInside base class constructor";
    }
};

class b : public a
{
    public:
    b()
    {
        cout<<"\nInside base class constructor";
    }
};

int main()
{
    b obj;
    return 0;
}