#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int sum=0,data;
    ifstream file("nos.txt");
    while(file.eof()==0)
    {
        file>>data;
        sum+=data;
    }
    cout<<"sum= "<<sum;
}