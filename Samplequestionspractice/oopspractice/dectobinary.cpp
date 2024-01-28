#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int no,a[32],count=0;
    cout<<"\nEnter the decimal number: ";
    cin>>no;
    while (no>0)
    {
        a[count]=no%2;
        no/=2;
        count++;
    }
    cout<<"\n";
    for (int i = count-1; i>=0; i--)
    {
        cout<<a[i];
    }  
}
