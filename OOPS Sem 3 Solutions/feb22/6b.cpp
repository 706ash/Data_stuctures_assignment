#include <iostream>
#include<cstring>
#include <fstream>
using namespace std;


class Employee
{
   char name[30];
   int basic_salary,emp_id;

   public: 
    char address[30];
    char designation[10];
   void setempdet(int no)
   {
       cout<<"\nEnter name: ";
       cin.ignore();
       cin.getline(name,30);
       cout<<"\nEnter designation: ";
       cin>>designation;
       cout<<"\nEnter address: ";
       cin>>address;
       cout<<"\nEnter salary: ";
       cin>>basic_salary;
       emp_id=1000+no;       
   }
   void filempdet()
   {
    ofstream file("emp.txt",ios::app);  
    file<<"\nName: "<<name;
    file<<"\nDesignation: "<<designation;
    file<<"\naddress: "<<address;
    file<<"\nsalary: "<<basic_salary;
    file<<"\nEmp_id: "<<emp_id;
    file<<endl;
    file.close();
   }
   void getempdet()
   {
    cout<<"\nName: "<<name;
    cout<<"\nDesignation: "<<designation;
    cout<<"\naddress: "<<address;
    cout<<"\nsalary: "<<basic_salary;
    cout<<"\nEmp_id: "<<emp_id;
    cout<<endl;
   }
};

int main()
{
   int choice,con,no;
   cout<<"\nenter the no of employees: ";
           cin>>no;
           Employee m[no];
   do
   {
       cout<<"\nEnter 1 to enter data\nEnter 2 to disp emp records whose deignation is engineer\n";
       cin>>choice;
       switch (choice)
       {
       case 1:
       {                 
           for (int i = 0; i < no; i++)
           {
            cout<<"\nEnter emp "<<i+1<<" details\n";
               m[i].setempdet(i+1);
               m[i].filempdet();
               
           }
           break;
       }
      
       case 2:
       {
            for (int i = 0; i < no; i++)
            {
                if(strcmp(m[i].designation,"engineer")==0)
                    m[i].getempdet();
            }
            
           
           break;
       }
         
       default:cout<<"\nErong choice";
           break;
       }
       cout<<"\ndo yun wat to cont?(1/0)";
       cin>>con;
   } while (con==1);
  
}
