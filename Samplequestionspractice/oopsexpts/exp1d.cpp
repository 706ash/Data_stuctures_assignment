#include <iostream>
using namespace std;

int main()
{
    int a[10],x,n;
    cout<<"\nter the srt of nos : ";
    cin>>n;
    cout<<"\nEnter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2!=0)
            sum+=a[i];
    } 
    cout<<"\nSum: "<<sum;
    int small=a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i]<small)
            small=a[i];
    }
    cout<<"\nS,]mallest: "<<small;
    int large=a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i]>large)
            large=a[i];
    }
    cout<<"\nLarge : "<<large;
    return 0;
}