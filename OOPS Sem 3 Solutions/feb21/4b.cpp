#include <iostream>
#include<cstring>
#include <fstream>
using namespace std;


class students
{
   char name[30];
   public: 
    char address[30],course[20];
   void setempdet()
   {
       cout<<"\nEnter name: ";
       cin.ignore();
       cin.getline(name,30);
       cout<<"\nEnter address: ";
       cin>>address;
       cout<<"\nEnter course selected: ";
       cin>>course;  
   }
   void getempdet()
   {
    cout<<"\nName: "<<name;
    cout<<"\naddress: "<<address;
    cout<<"\nCourse: "<<course;
   }
    void eng()
    {
        ofstream eng("eng.txt",ios::app);
        eng<<"\nName: "<<name;
        eng<<"\naddress: "<<address;
        eng<<"\nCourse: "<<course;
        eng.close();
    }
    void phar()
    {
        ofstream phar("pharmacy.txt",ios::app);
        phar<<"\nName: "<<name;
        phar<<"\naddress: "<<address;
        phar<<"\nCourse: "<<course;
        phar.close();
    }
    void med()
    {
        ofstream med("med.txt",ios::app);
        med<<"\nName: "<<name;
        med<<"\naddress: "<<address;
        med<<"\nCourse: "<<course;
        med.close();
    }
        
};

int main()
{
   int choice,con,no;
   cout<<"\nenter the no of students: ";
           cin>>no;
           students m[no];
   do
   {
       cout<<"\nEnter 1 to enter data\nEnter 2 to display data and store it in files\n";
       cin>>choice;
       switch (choice)
       {
       case 1:
       {                 
           for (int i = 0; i < no; i++)
           {
            cout<<"\nEnter student "<<i+1<<" details\n";
               m[i].setempdet();
           }
           break;
       }
      
       case 2:
       {
            for (int i = 0; i < no; i++)
            {
                if(strcmp(m[i].course,"engineering")==0)
                {
                    cout<<"\nEngineering\n";
                    m[i].getempdet();
                    m[i].eng();
                }
                if(strcmp(m[i].course,"medicine")==0)
                {
                    cout<<"\nMedicine\n";
                    m[i].getempdet();
                    m[i].med();
                }
                if(strcmp(m[i].course,"pharmacy")==0)
                {
                    cout<<"\npharmacy\n";
                    m[i].getempdet();
                    m[i].phar();
                }
            }
           break;
       }
         
       default:cout<<"\nWrong choice";
           break;
       }
       cout<<"\ndo yun wat to cont?(1/0)";
       cin>>con;
   } while (con==1);
  
}
