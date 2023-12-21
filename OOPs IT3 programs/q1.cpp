#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    int data,sum=0;
    ifstream inf("data.txt");
    while(inf>>data)
    {
        sum=sum+data;
    }
    cout<<"Sum= "<<sum;
    inf.close();
    return 0;    
}