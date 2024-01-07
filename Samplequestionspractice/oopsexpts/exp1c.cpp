#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,x,sum=0;
    cout<<"\nEnter the number to check whether its is amstrong: ";
    cin>>n;
    x=log10(n)+1;
    int temp=n;

    while(n>0)
    {
        sum+=pow(n%10,x);
        n/=10;
    }
    if(temp==sum)
        cout<<"\nIt is amstrong";
    else
        cout<<"\nIt is not amstrong";
    return 0;
}