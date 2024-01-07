#include <iostream>
#include <string>
using namespace std;
class A
{
    int x,y;
    public:
    A(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    A& setx(int a)
    {
        x=a;
        return *this;
    }
    A& sety(int b)
    {
        y=b;
        return *this;
    }
    void display()
    {
        cout<<endl<<x<<endl<<y;
    }
};
int main()
{
    A obj(10,29);
    obj.setx(5).sety(6);
    obj.display();
}