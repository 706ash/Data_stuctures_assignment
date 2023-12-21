#include <iostream>
#include <fstream>
#include<string>
#include<cstring>

using namespace std;

class food
{
    string manu_name;
    int quantity;
    public:
    string name;
    int price;
    void readdata(string name,int price,string manu_name,int quantity)
    {
        this->name=name;
        this->price=price;
        this->manu_name=manu_name;
        this->quantity=quantity;
    }
    void disp()
    {
        cout<<endl<<name<<endl;
        cout<<price<<endl;
        cout<<manu_name<<endl;
        cout<<quantity;
    }
};
int main()
{
    food m[10];
    string name,manu_name;
    int price,quantity,con,choice,i=0;
    fstream file("food.txt");
    while(file.eof()==0)
    {
        file>>name;
        file>>price;
        file>>manu_name;
        file>>quantity;
        m[i].readdata(name,price,manu_name,quantity);
        i++;
    }

    do
   {
       cout<<"\nEnter 1 to disp det\nEnter 2 to disp food items within price range\n";
       cin>>choice;
       switch (choice)
       {
       case 1:
       {    string temp;            
            cout<<"enter name: ";
            cin>>temp; 
           for (int i = 0; i < 10; i++)
           {
                if(m[i].name==temp)
                {
                    m[i].disp();
                }
           }
           break;
       }
      
      case 2:
       {     
           for (int i = 0; i < 10; i++)
           {
                if(m[i].price>=100 && m[i].price<=500)
                    m[i].disp();
           }
           break;
       }
       default:cout<<"\nWrong choice";
           break;
       }
       cout<<"\ndo yun wat to cont?(1/0)";
       cin>>con;
   } while (con==1);
    return 0;

}