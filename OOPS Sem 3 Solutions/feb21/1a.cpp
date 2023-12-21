#include <iostream>
using namespace std;

class arr
{
    int array[10];
    public:
    arr()
    {
        cout<<"\nEnter any 3 integers";
        for (int i = 0; i < 3; i++)
            cin>>array[i];
    }
    int operator[](int i)
    {
        return array[i];
    }
};
int main()
{
    int index;
    arr obj;
    cout<<"\nEnter the array index of the element to search: ";
    cin>>index;
    cout<<endl<<obj[index];
    return 0;
}