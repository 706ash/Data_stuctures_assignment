#include <iostream>
using namespace std;

class Person
{
    char name[30];
    char address[30];
    int phone_no;

    public: void getpersondet()
    {
        cout<<"\nEnter name: ";
        cin.ignore();
        cin.getline(name,30);
        cout<<"\nEnter address: ";
        cin.ignore();
        cin.getline(address,30);
        cout<<"\nEnter phone no: ";
        cin>>phone_no;
    }
};

class Employee : public Person
{
    char ename[30];
    int eno;

    public:
    void getempdet()
    {
        cout<<"\nEnter employee name: ";
        cin.ignore();
        cin.getline(ename,30);
        cout<<"\nEnter emp no: ";
        cin>>eno;
    }
};

class Manager : public Employee
{
    char designation[20];
    char dept_name[30];
    

    public:
    int basic_salary;
    void getmanagerdet()
    {
        cin.ignore();
        cout<<"\nEnter designation: ";
        cin.getline(designation,20);
        cout<<"\nEnter dept_name: ";
        cin>>dept_name;
        cout<<"\nEnter salary: ";
        cin>>basic_salary;
    }
};

int main()
{
    int choice,con,no;
    cout<<"\nenter the no of managers";
            cin>>no;
            Manager m[no];
    do
    {
        cout<<"\nEnter 1 to accept manager details\nEnter 2 to disp manger having highest salary";
        cin>>choice;
        switch (choice)
        {
        case 1:
        {                  
            for (int i = 0; i < no; i++)
            {
                m[i].getpersondet();
                m[i].getempdet();
                m[i].getmanagerdet();
            }
            break;
        }
        
        case 2:
        {
            int highest=m[0].basic_salary;
            for (int i = 1; i < no; i++)
            {
                if(m[i].basic_salary>highest)
                {
                    highest=m[i].basic_salary;
                }
                
            }
            cout<<"\nHighest salary: "<<highest;
            break;
        }
           
        default:cout<<"\nErong choice";
            break;
        }
        cout<<"\ndo yun wat to cont?(1/0)";
        cin>>con;
    } while (con==1);
    
}