#include <iostream>
#include<cstring>
using namespace std;


class Employee
{
   char name[30];
   int basic_salary,emp_id;

   public: 
    char address[30];
   void setempdet(int no)
   {
       cout<<"\nEnter name: ";
       cin.ignore();
       cin.getline(name,30);
       cout<<"\nEnter address: ";
       cin>>address;
       cout<<"\nEnter salary: ";
       cin>>basic_salary;
       emp_id=1000+no;       
   }
   void getempdet()
   {
    cout<<"\nName: "<<name;
    cout<<"\naddress: "<<address;
    cout<<"\nsalary: "<<basic_salary;
    cout<<"\nEmp_id: "<<emp_id;
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
       cout<<"\nEnter 1 to enter data\nEnter 2 to disp emp records whose address is margao\n";
       cin>>choice;
       switch (choice)
       {
       case 1:
       {                 
           for (int i = 0; i < no; i++)
           {
            cout<<"\nEnter emp "<<i+1<<" details\n";
               m[i].setempdet(i+1);
           }
           break;
       }
      
       case 2:
       {
            for (int i = 0; i < no; i++)
            {
                if(strcmp(m[i].address,"margo")==0)
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
