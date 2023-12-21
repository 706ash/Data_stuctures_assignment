#include <iostream>
using namespace std;

int absolute(int a)
{
    if(a<0)
        return -a;
    return a;
}

float absolute(float a)
{
    if(a<0.0)
        return -a;
    return a;
}
int main()
{
    int x=-5;
    float y=-8.9;
    cout<<"\nAbsolue value of x="<<absolute(x);
    cout<<"\nAbsolue value of y="<<absolute(y);
    return 0;
}