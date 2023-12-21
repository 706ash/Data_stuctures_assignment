#include <iostream>
using namespace std;

template <class t>
void greatest(t a, t b,t c)
{
    if(a>b && a>c)
        cout<<"\ngreatest"<<a;
    else if(b>a && b>c)
        cout<<"\ngratest"<<b;￼
    else if(c>a && c>b)
        cout<<"\ngreatest"<<c;
}

int main()
{
    int a,b,c;
    cout<<"\nEnter any 3 integer nos: ";
    cin>>a>>b>>c;
    greatest(a,b,c);
    float e,f,g;
    cout<<"\nEnter any 3 float nos: ";
    cin>>e>>f>>g;
    greatest(e,f,g);
    return 0;

}