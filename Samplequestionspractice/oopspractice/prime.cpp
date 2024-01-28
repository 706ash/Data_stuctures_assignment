#include <iostream>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"\nEnter a no: ";
    cin>>n;
    for (int i = 1; i<=n; i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        cout<<"\nNo is prime";
    else
        cout<<"\nNot primr";
}