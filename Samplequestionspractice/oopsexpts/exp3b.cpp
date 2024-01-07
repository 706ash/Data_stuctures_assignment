#include <iostream>
using namespace std;

class Box
{
    int l,b,h,v;
    public:
    Box()
    {
        cout<<"Your inside defaulat c";
    }
    int volume()
    {
        cout<<"\nenter the length , breadth and height of box: ";
        cin>>l>>b>>h;
        return l*b*h;
    }
    Box(int v)
    {
        this->v=v;
        cout<<"\nINside paramet";
        cout<<"\nVolume: "<<v;
    }
    Box(Box &object)
    {
        cout<<"\nINside copy";
        cout<<"\nVolume= "<<object.v;
    }

};
int main()
{
    Box obj;
    int volume=obj.volume();
    Box obj2(volume);
    Box obj3(obj2);
}