#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    int rollno;
    char name[20];
    char division[20];

    ofstream outf("/home/ashden/Documents/GitHub/Data_stuctures_assignment/OOPs IT3 programs/a.txt");
    cout<<"\nEnter your name: ";
    cin.getline(name,20);
    cout<<"\nEnter your roll no:  ";
    cin>>rollno;
    cin.ignore(); //this function ignore any previous newline, since getline can't handle any previous newline like cin.
    cout<<"\nEnter your division: ";
    cin.getline(division,20);
    outf<<"Name: "<<name<<endl;
    outf<<"Roll No: "<<rollno<<endl;
    outf<<"Division: "<<division<<endl;
    outf.close();
    return 0;

}