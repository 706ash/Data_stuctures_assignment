#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int bin,count=0,sum=0;
    cout<<"\nEnter the binary number: ";
    cin>>bin;
    while (bin>0)
    {
        sum+=bin%10*pow(2,count);
        bin/=10;
        count++;
    }
    cout<<"\nSum= "<<sum;
}