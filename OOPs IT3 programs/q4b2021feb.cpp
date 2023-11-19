//file.close() needs debugging
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
class candidates
{
    char name[30];
    char address[30];
    char course[30];

    public:
    void engineering()
    {

         ofstream file("/home/ashden/Documents/GitHub/Data_stuctures_assignment/OOPs IT3 programs/engineering.txt",ios::app);
        file<<name<<endl;
        file<<address<<endl;
        file<<course<<endl;
        if(file.fail()!=0)
        {   cout<<"Output operation has failed";
            exit (1);
        }
        if(file.good()!=0)
        {
            cout<<"No error has occured";
        }
        file.close();
    }

    
     void enterdetails()
    {
        char eng[12]="engineering";
        cin.ignore();
        cout<<"\nEnter your name : ";
        cin.getline(name,30);
        cout<<"\nENter your address: ";
        cin.getline(address,30);
        cout<<"\nENter your course: ";
        cin.getline(course,30);
        if(strcmp(course,eng)==0)
            engineering();
       
    }


};
int main()
{
    int n;
    candidates A;
    cout<<"\nEnter the number of candiadtes: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        A.enterdetails();
    }    
    return 0;

}