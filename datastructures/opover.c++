#include<iostream>
using namespace std;

class overload
{
    public:   int real,img;
    overload operator+(overload &C)
    {
        overload x;
        x.real=real+C.real;
        x.img=img+C.img;
        return x;
    }
    friend overload operator++(overload &A);

    void display()
    {
        cout<<real<<"+"<<img<<"i";
    }
};
overload operator++(overload &A)
{
        overload C;
        C.real=++A.real;
        C.img=++A.img;
        return C;
}
int main()
{
    overload A,B,C;
    A.real=3;
    A.img=4;
    C.real=10;
    C.img=14;
    cout<<"\nBefore preincrement A: ";
    A.display();
    B=++A;
    cout<<"\nAfter preincrement A: ";
    B.display();
    cout<<"\nA = ";
    A.display();
    cout<<"\nC = ";
    C.display();
    B=A+C;
    cout<<"\nAfter adding A and C: ";
    B.display();
    cout<<endl;
    return 0;
}