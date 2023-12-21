#include <iostream>
#include<string>
using namespace std;

class temp
{
    string s;
    public:
    temp(string s="")
    {
        this->s=s;
    }
    friend string show(temp);
    int operator<=(temp &t2)
    {
        return (s.size()<=t2.s.size());
    }
    void operator=(temp &t)
    {
        s=t.s;
    }
};

string show(temp t3)
{
    return t3.s;
}

int main()
{
    temp t1("object"),t2("oriented"),t3;
    if(t1<=t2)
    {
        t3=t1;
        cout<<show(t3)<<"string is lesser";
    }
    else
    {
        t3=t2;
        cout<<show(t3)<<"string is greater";
    }
}