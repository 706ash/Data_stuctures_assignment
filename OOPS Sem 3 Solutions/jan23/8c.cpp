#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //file in write mode
    ofstream file("a.txt");
    if(file.fail()!=0)
        cout<<"\nError while opening file";
    file<<"file is opened in write mode";
    if(file.good()!=0)
        cout<<"\nappend performed successfully";
    file.close();

//file in apend mode
    ofstream outf("a.txt",ios::app);
    if(file.fail()!=0)
        cout<<"\nError while opening file";
    outf<<"\nThis file is opened in append mode so prvious data is not overwritten";
    if(file.good()!=0)
        cout<<"\nappend performed successfully";
    outf.close();
}