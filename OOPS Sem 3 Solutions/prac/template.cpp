#include <iostream>
#include <string>
using namespace std;

template <class t>
void swap(t *a,t *b)
{
    t c=*a;
    *a=*b;
    *b=c;    
}

int main()
{
    int a=10,b=20;
    swap(&a,&b);
    cout<<a<<"\t"<<b;
}