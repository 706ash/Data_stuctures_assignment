#include <iostream>
#include<cstring>
#include <fstream>
using namespace std;


class Passanger
{
    public: 
    int age,regid;
    char start_place[30],end_dest[30];
    char coach_type[5];
    char passanger_name[30];
   void setpasdet()
   {
    int o;
       cout<<"\nEnter name: ";
       cin.ignore();
       cin.getline(passanger_name,30);
       cout<<"\nEnter start place : ";
       cin>>start_place;      
       cout<<"\nEnter end place : ";
       cin>>end_dest;   
       cout<<"\nEnter age : ";
       cin>>age;
       cout<<"\nEnter regid : ";
       cin>>regid;    
       cout<<"\nEnter coach type: ";
       cin>>coach_type;
         
   }
   void getpasdet()
   {
        cout<<"\nName: "<<passanger_name;
   }
};

int main()
{
   int choice,con,no,regid;
   cout<<"\nenter the no of passangers: ";
           cin>>no;
           Passanger m[no];
    for (int i = 0; i < no; i++)
    {
        m[i].setpasdet();
    }
    
   do
   {
       cout<<"\nEnter diplay passanger list of 2a,3a and Sl\nEnter 2 disp passanger details\n";
       cin>>choice;
       switch (choice)
       {
       case 1:
       {          
            ofstream a("2a.txt");
            ofstream b("3a.txt");
            ofstream c("SL.txt");       
           for (int i = 0; i < no; i++)
           {       
               
               if(strcmp(m[i].coach_type,"2A")==0)
                {
                    a<<endl<<m[i].passanger_name;
                    cout<<"\n2a\n"<<endl<<m[i].passanger_name;
                }
                if(strcmp(m[i].coach_type,"3A")==0)
                {
                    b<<endl<<m[i].passanger_name;
                    cout<<"\n3a\n"<<endl<<m[i].passanger_name;
                }
                if(strcmp(m[i].coach_type,"SL")==0)
                {
                    c<<endl<<m[i].passanger_name;
                    cout<<"\nSL\n"<<endl<<m[i].passanger_name;
                }
                
           }
           a.close();
                b.close();
                c.close();

           break;
       }
      
       case 2:
       {
        cout<<"\nEnter the regid to search: ";
        cin>>regid;
            for (int i = 0; i < no; i++)
            {
                if(m[i].regid==regid)
                    m[i].getpasdet();
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
