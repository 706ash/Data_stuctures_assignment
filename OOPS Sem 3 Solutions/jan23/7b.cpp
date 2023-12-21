#include <iostream>
using namespace std;

class average
{
    int marks;
    static int count;
    public: average()
    {
        cout<<"Enter student "<<count<<" marks: ";
        cin>>marks;
        count++;
    }
    friend void aver(average s1, average s2);
};

void aver(average s1, average s2)
{
    cout<<"\nAverage = "<<(s1.marks+s2.marks)/2;
}
int average :: count =1;

int main()
{
    average s1,s2;
    aver(s1,s2);

}