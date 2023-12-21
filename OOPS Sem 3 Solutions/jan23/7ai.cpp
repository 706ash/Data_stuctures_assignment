#include <iostream>
using namespace std;

int main()
{
    int n,r,sum=0;
    cout<<"\nEnter the number: ";
    cin>>n;
    //sentinel controlled loop
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    cout<<"\nsum="<<sum;
    return 0;

}