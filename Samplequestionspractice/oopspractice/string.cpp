#include<iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    string c[10],cap[10];
    int count=0;
    ifstream f("coun.txt");
    ifstream ca("cap.txt");
    while (f.eof()==0)
    {
        getline(f,c[count]);
        getline(ca,cap[count]);
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        cout<<endl<<c[i];
        cout<<endl<<cap[i];
    }
    f.close();
    ca.close();
}