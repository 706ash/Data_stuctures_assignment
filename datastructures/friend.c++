#include<iostream>
using namespace std;

class test
{
    public: int x;
    friend void function(test &a);
};

void function(test &a)
{
    cout<<"\nthe value of x is "<<a.x;
}

int main()
{
    test a;
    a.x=7;
    function(a);
    return 0;
}