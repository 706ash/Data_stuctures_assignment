#include <iostream>
using namespace std;

class temp
{
    int a;
    public:
    temp(int a=0)
    {
        this->a=a;
    }
    temp operator+(int scalar)
    {
        temp t;
        t.a=a+scalar;
        return t;
    }
    friend temp operator+(int scalar,temp obj);
    void display()
    {
        cout<<endl<<a;
    }
};

temp operator+(int scalar,temp obj)
{
        temp t;
        t.a=scalar+obj.a;
        return t;
}
int main()
{
    temp t1(10),t2;
    t2=5+t1+10;
    t2.display();
    return 0;
}