#include <iostream>
#include<cstring>
using namespace std;


class Student
{
   char name[30];
   char address[30],branch[10];

   public: 

    int rollno;
   void setstudet(int no)
   {
       cout<<"\nEnter name: ";
       cin.ignore();
       cin.getline(name,30);
       cout<<"\nEnter address: ";
       cin>>address;
       cout<<"\nEnter branch: ";
       cin>>branch;
       rollno=221400+no;       
   }
   void getstudet()
   {
    cout<<"\nName: "<<name;
    cout<<"\naddress: "<<address;
    cout<<"\nbranch: "<<branch;
    cout<<"\nroll no: "<<rollno;
   }
};

int main()
{
   int choice,con,no,roll;
   cout<<"\nenter the no of students: ";
           cin>>no;
           Student m[no];
   do
   {
       cout<<"\nEnter 1 to enter data\nEnter 2 to disp data\nEnter 3 to search record\n";
       cin>>choice;
       switch (choice)
       {
       case 1:
       {                 
           for (int i = 0; i < no; i++)
           {
            cout<<"\nEnter student "<<i+1<<" details\n";
               m[i].setstudet(i+1);
           }
           break;
       }
      
      case 2:
       {                 
           for (int i = 0; i < no; i++)
           {
            cout<<"\nstudent "<<i+1<<" details\n";
               m[i].getstudet();
           }
           break;
       }
       case 3:
       {
            cout<<"\nEnter roll no to search: ";
            cin>>roll;
            for (int i = 0; i < no; i++)
            {
                if(m[i].rollno==roll)
                    m[i].getstudet();
            }          
           break;
       }
         
       default:cout<<"\nErong choice";
           break;
       }
       cout<<"\ndo yun wat to cont?(1/0)";
       cin>>con;
   } while (con==1);
   return 0;
  
}
