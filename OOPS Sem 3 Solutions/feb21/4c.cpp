#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    while(!s1.empty())
    {    
        cout<<s1.top()<<endl;
        s1.pop(); 
    }     
    return 0;
}