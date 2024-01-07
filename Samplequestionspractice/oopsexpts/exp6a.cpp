#include <iostream>
using namespace std;

class A
{

private:
    int a,b;
public:
    void get()
    {
        cout<<"\nEnter a number: ";
        cin>>a;
    }

    A operator+(A obj)
    {
        A t;
        t.a=a+obj.a;
        return t;
    }

    A operator-(A obj)
    {
        A t;
        t.a=a-obj.a;
        return t;
    }

    A operator*(A obj)
    {
        A t;
        t.a=a*obj.a;
        return t;
    }
    
    A operator/(A obj)
    {
        A t;
        t.a=a/obj.a;
        return t;
    }

    int display()
    {
        return a;
    }
};

int main()
{
    int o,con;
    A obj1;
    A obj2;
    A t;

    do
    {
        obj1.get();
        obj2.get();
        cout<<"\nEnter 1 to add 2 to sub 3 to multiply 4 to divide";
        cin>>o;
        switch (o)
        {
        case 1:
            t=obj1+obj2;
            cout<<"\nAdd= "<<t.display();
            break;
        
        case 2:
            t=obj1-obj2;
            cout<<"\nSub= "<<t.display();
            break;

        case 3:
            t=obj1*obj2;
            cout<<"\nMul= "<<t.display();
            break;
        
        case 4:
            t=obj1/obj2;
            cout<<"\nDiv= "<<t.display();
            break;
        
        default:
            cout<<"\nWorong choice: ";
            break;
        }
        cout<<"\nDo you want to contine(1/0): ";
        cin>>con;
    } while (con==1);
    
}