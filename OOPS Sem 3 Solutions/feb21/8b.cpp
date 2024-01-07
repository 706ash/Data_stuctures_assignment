#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream odd("odd.txt");
    if(odd.fail()!=0)
        cout<<"\nError while opening file odd.txt";
    ofstream even("even.txt");
    if(even.fail()!=0)
        cout<<"\nError while opening file even.txt";
    int a[10];
    cout<<"\nEnter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even<<a[i]<<endl;
        else
            odd<<a[i]<<endl;
    }
    if(odd.good()!=0)
        cout<<"\nAll operations performed successfullly";
    odd.close();
    even.close();    
}