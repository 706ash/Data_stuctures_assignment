#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    int data,sum=0;
    ifstream inf("/home/ashden/Documents/GitHub/Data_stuctures_assignment/OOPs IT3 programs/tyrone.txt");
    while(inf>>data)
    {
        sum=sum+data;
    }
    cout<<"\nThe sum of the values: "<<sum<<endl;
    inf.close();s
    return 0;    
}