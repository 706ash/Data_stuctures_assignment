#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string country,capital;
    ifstream file1("country.txt");
    ifstream file2("capital.txt");
    while(file1.eof()==0)
    {
        getline(file1,country);
        getline(file2,capital);
        cout<<"\nCapital of "<<country<<" is "<<capital;       
    }
    file1.close();
    file2.close();
    return 0;
}