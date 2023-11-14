#include <iostream>
using namespace std;

template <class t>
void swap(t *a,t *b)
{
    t temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a,b;
    float c,d;
    cout<<"\nEnter integer values of a and b to be swapped: ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"\nAfter swapping the value of a is "<<a<<" b is"<<b; 
    cout<<"\nEnter floating values of c and d to be swapped: ";
    cin>>c>>d;
    swap(&c,&d);
    cout<<"\nAfter swapping the value of c is "<<c<<" d is"<<d;
    return 0;
}