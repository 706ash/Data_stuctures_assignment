#include <iostream>
#include <string>
using namespace std;

void swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}

void swap(float &c,float &d)
{
    float t=c;
    c=d;
    d=t;
}

void swap(string &s1,string &s2)
{
    string t=s1;
    s1=s2;
    s2=t;
}
int main()
{
    int a,b;
    cout<<"\nEnter 2 integers: ";
    cin>>a>>b;
    swap(a,b);
    cout<<"\nafter swappng: ";
    cout<<a<<b;
    float c,d;
    cout<<"\nEnter 2 float: ";
    cin>>c>>d;
    swap(c,d);
    cout<<"\nafter swappng: ";
    cout<<c<<d;
    string s1,s2;
    cout<<"\nEnter 2 strings: ";
    cin>>s1>>s2;
    swap(s1,s2);
    cout<<"\nafter swappng: ";
    cout<<s1<<endl<<s2;
}