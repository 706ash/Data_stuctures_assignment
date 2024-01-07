#include <iostream>
#include<iomanip>
using namespace std;




int main()
{
  cout<<setfill('0')<<setw(12)<<setiosflags(ios::left)<<"5.4321"<<endl;
  cout<<setfill('x')<<setw(15)<<resetiosflags(ios::left)<<"4.324e+001"<<endl;
  cout<<"+"<<setfill('#')<<setw(4)<<"1"<<setfill('#')<<setw(12)<<"+1.0000";
   return 0;
}
