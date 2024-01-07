#include <iostream>
#include <string>
using namespace std;

void swap(string &s1,string &s2)
{
    string t=s1;
    s1=s2;
    s2=t;
}
int main()
{
    string s1,s2;
    int no;
    cout<<"\nENer a no: ";
    cin>>no;
    cout<<"Enter strings 1: ";
    cin.ignore();
    getline(cin,s1);
    cout<<s1.length();
    cout<<"Enter strings 2: ";
    getline(cin,s2);
    swap(s1,s2);
    cout<<"\nAfter swapping s1= "<<s1<<endl<<" s2= "<<s2;
    
}