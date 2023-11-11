#include<iostream>
using namespace std;

class student
{
    public : static int c;
    static void Student()
    {
        c++;
        cout<<"\nStudent : "<<c;
    }
};

int student :: c=0; 

int main()
{
    student a,b,c;
    student::Student();
    a.Student();
    b.Student();
    c.Student();
    return 0;
}