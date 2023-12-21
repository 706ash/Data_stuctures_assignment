#include <iostream>
using namespace std;

void calculate(int a,int b,int z)
{
    try
    {
        if(z==1)
            cout<<"\na+b: "<<a+b;
        else if(z==2)
            cout<<"\na-b: "<<a-b;
        else if(z==3)
        {
            if(b==0)
                throw 1;
            else
                cout<<"\na/b: "<<a/b;
        }
        else if(z==4)
            cout<<"\na*b: "<<a*b;
        else 
            cout<<"\nInvalid oeration";
        
    }
    catch(int i)
    {
        cout<<"\nDivide by 0 exception caught";
    }
    
    
}
int main()
{
    int a,b,choice,con;
    cout<<"\nEnter two numbers: ";
    cin>>a>>b;
    do
    {
        cout<<"\nEnter 1 to add\nEneter 2 to subtract\nEnter 3 to divide\nEnter 4 to multoply";
        cin>>choice;
        switch (choice)
        {
        case 1:
        {
            calculate(a,b,1);
            break;
        }
        case 2:
        {
            calculate(a,b,2);
            break;
        }
        case 3:
        {
            calculate(a,b,3);
            break;
        }case 4:
        {
            calculate(a,b,4);
            break;
        }
        default:
        {
        cout<<"\nWrong choice";
        break;
        }
    }
    cout<<"\ndo yun wat to cont?(1/0)";
        cin>>con;
    } while (con==1);
    return 0;
}