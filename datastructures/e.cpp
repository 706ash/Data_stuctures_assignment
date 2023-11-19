#include <iostream>
#include <string.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

class student
{
    char name[20];
    int rollno;
    int attendance;
    int marks,n;
    char backlog;
    int back;
    float tot_marks,percent;
    char classroom[20];
    public:
    void enter_details();
    void show_result();
    void find_percent();
    void edit_details();
    void show_eligibility();
    void print_details();
    void answertest();
    void shuffle(int *arr,int length);
};

void student::show_eligibility()
{
    if(back > 7 && attendance <75)
    {
        cout<<"\nCannot appear for the Exam.";
    }   
    else
    {
         cout<<"\nYou are eligible to answer the exam.";
    }
}
void student::edit_details()
{
int choice;
    char a;
    student S1;
    do{
        cout<<"\nPress 1 to change your name\n";
            cout<<"Press 2 to change the attendance\n";
            cout<<"Press 3 to change the roll no\n";
        cin>>choice;
        switch(choice)
            {
                case 1:
                    cin.ignore();
                    cout<<"Enter your name\n";
                    cin.getline(name,20);
                    break;
                case 2:cout<<" Enter your attendance\n";
                    cin>>attendance;
                    break;
                case 3:cout<<" Enter your roll no\n";
                    cin>>rollno;
                    break;
                default: cout<<"wrong choice\n";
                    break;                   
            }
        cout<<"do you want to continue (Y/N)";
        cin>>a;
    }
    while(a=='Y');

}

void student::enter_details()
{
    cin.ignore();
    cout<<endl<<"Enter Name of student: ";
    cin.getline(name,20);
    cout<<endl<<"Enter rollno: ";
    cin>>rollno;
    cout<<endl<<"Enter attendence: ";
    cin>>attendance;
    //backlog part
    cout<<endl<<"Do you have any backlogs(Y/N): ";
    cin>>backlog;
    if(backlog == 'Y')
    {
        cout<<"\nEnter no. of backlogs: ";
        cin>>back;
    }
    else
    	back=0;
}
void student::find_percent()
{
	cout<<endl<<"\nEnter the total marks obtained in the exam: ";
	cin>>tot_marks;
    cout<<endl<<"Enter the Total marks in Exam: ";
    cin>>n;
    percent=(tot_marks/n)*100;
    cout<<endl<<"Percent obtained in Exam: "<<percent<<endl;
}
void student::show_result()
{
    if(percent>=85 &&  percent<=100)
    {
        cout<<endl<<"Your percent is: "<<percent<<"- Outstanding performance"<<endl;
    }
    else if(percent>=75)
    {
        cout<<endl<<"Your percent is: "<<percent<<"- Distiction"<<endl;
    }
    else if(percent>=65)
    {
        cout<<endl<<"Your percent is: "<<percent<<"- First Class"<<endl;
    }
     else if(percent>=55)
     {
         cout<<endl<<"Your percent is: "<<percent<<"- Second Class"<<endl;
     }
     else if(percent>=40)
     {
         cout<<endl<<"Your percent is: "<<percent<<"- Pass Class"<<endl;
     }
     else
     {
          cout<<endl<<"Your percent is: "<<percent<<"- Failed "<<endl;
     }
}
void student::print_details()
{
    cout<<endl<<"-------------------------------------------------";
    cout<<endl<<"|                  STUDENT DETAILS              |";               
    cout<<endl<<"-------------------------------------------------";
    cout<<endl<<"|                   Name: "<<name;
    for (int i = 1; i <= 22 - strlen(name); i++)
    {
        cout<<" ";
    }
    cout<<"|";
    cout<<endl<<"|                                               |";                               
    cout<<endl<<"|                   Roll No.: "<<rollno;
    for (int i = 1; i <= 18 - (log10(rollno+1)); i++)
    {
        cout<<" ";
    }      
    cout<<"|"; 
    cout<<endl<<"|                                               |";                 
    cout<<endl<<"|                   Attendance: "<<attendance;
    for (int i = 1; i <= 17 - (log10(attendance)+1); i++)
    {
        cout<<" ";
    }          
    cout<<"|";
    cout<<endl<<"|                                               |";
    cout<<endl<<"|                   Backlogs: "<<back;
    for (int i = 1; i <= 18 - (log10(back)+1); i++)
    {
        cout<<" ";
    }          
    cout<<"|";    
    cout<<endl<<"|                                               |";  
    if(back < 7 && attendance >75)
    {
    cout<<endl<<"|                   Eligible                    |";               

    }   
    else
    {
    cout<<endl<<"|                   Not Eligible                |";               
    }                   
    cout<<endl<<"-------------------------------------------------";

}
void student::shuffle(int *arr,int length)
{
	srand( time(NULL) ); // seed the random number generator with the current time
	for(int i=0;i<length;i++)
	{
		int rand_no = rand() % length;
		int temp = arr[i];
		arr[i] = arr[rand_no];
		arr[rand_no] = temp;
	}
}

void student::answertest()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    shuffle(&arr[0],10);
    for (int i = 0 ; i < 10 ; i++)
    	cout<<arr[i]<<"\t";
    marks=0;
    int choice;
    cout<<"\n                     Guidlines for the exam                       \n\n";
    
    cout<<"\n1) The test will consist of 10 questions";
    cout<<"\n2) Each correct answer carries 2 marks each";
    cout<<"\n3) Select the best answer possible between options 1 ,2 , 3 ,4,no marks will be awarded if any other number is entered";
    cout<<"\n4) All the questions are compulsory\n";
    for(int i = 0; i < 10 ; i++)
    {
        switch(arr[i])
        {
        case 1:    
            {
            cout<<"\n\nQ"<<i+1<<") Which feature of OOP indicates code reusability?\n1) Abstraction\n2) Polymorphism\n3) Encapsulation\n4) Inheritance";
            cout<<"\nEnter your choice: ";
            cin>>choice;
            if(choice==4)
                marks=marks+2;
            break;
            }
        case 2:
        {
            cout<<"\n\nQ"<<i+1<<") When OOP concept did first came into picture\n1) 1980’s\n2) 1995\n3) 1970’s\n4) 1993";
            cout<<"\nEnter your choice: ";
            cin>>choice;
            if(choice==3)
                marks=marks+2;
            break;
        }
        case 3:
        {
            cout<<"\n\nQ"<<i+1<<") Which among the following doesn’t come under OOP concept?\n1) Data hiding\n2) Message passing\n3) Platform independent\n4) Data binding";
            cout<<"\nEnter your choice: ";
            cin>>choice;
            if(choice==3)
                marks=marks+2;
            break;
        }
        case 4:
        {
            cout<<"\n\nQ"<<i+1<<") Object being passed to a copy constructor ___________\n1) Must not be mentioned in parameter list\n2) Must be passed with integer type\n3) Must be passed by value\n4) Must be passed by reference";
            cout<<"\nEnter your choice: ";
            cin>>choice;
            if(choice==2)
                marks=marks+2;
            break;
        }
        case 5:
        {
            cout<<"\n\nQ"<<i+1<<") How many types of access specifiers are provided in OOP (C++)?\n1) 4\n2) 3\n4) 2\n3) 1";
            cout<<"\nEnter your choice: ";
            cin>>choice;
            if(choice==2)
                marks=marks+2;
            break;
        }
        case 6:
        {
            cout<<"\n\nQ"<<i+1<<") Single level inheritance supports _____________ inheritance.\n1) Language independency\n2) Multiple inheritance\n3) Compile time\n4) Runtime";
            cout<<"\nEnter your choice: ";
            cin>>choice;
            if(choice==4)
                marks=marks+2;
            break;
        }
        case 7:
        {    cout<<"\n\nQ"<<i+1<<") What happens if non static members are used in static member function?\n1) Executes fine\n2) Compile time error\n3) Executes if that member function is not used\n4) Runtime error";
            cout<<"\nEnter your choice: ";
            cin>>choice;        
            if(choice==2)
                marks=marks+2;
            break;
        }
        case 8:
        {
            cout<<"\n\nQ"<<i+1<<") Encapsulation and abstraction differ as ____________\n1) Hiding and hiding respectively\n2) Binding and Hiding respectively\n3) Hiding and Binding respectively\n4) Can be used any way";
            cout<<"\nEnter your choice: ";
            cin>>choice;        
            if(choice==2)
                marks=marks+2;
            break;
        }
        case 9:
        {
            cout<<"\n\nQ"<<i+1<<") Which feature of OOP is exhibited by the function overriding?\n1) Polymorphism\n2) Encapsulation\n3) Abstraction\n4) Inheritance";
            cout<<"\nEnter your choice: ";
            cin>>choice;       
            if(choice==1)
                marks=marks+2;
            break;
        }
        case 10:
        {
            cout<<"\n\nQ"<<i+1<<") How to access the private member function of a class?\n1) Using class address\n2) Using object of class\n3) Using object pointer\n4) Using address of member function";
            cout<<"\nEnter your choice: ";
            cin>>choice;
            if(choice==4)
                marks=marks+2;
            break;
        }
            
        }
    }
    cout<<"\nYour score is : "<<marks;

}


int main()
{
	cout<<"\n                         ONLINE EXAMINATION SYSTEM";
int choice;
    int a;
    student S1;
    do{
    	cout<<"\n\n\n                                 MAIN MENU";
        cout<<"\n\nPress 1 to enter your details\n";
        cout<<"Press 2 to show your eligibity\n";
        cout<<"Press 3 to edit your details\n";
        cout<<"Press 4 to print your details\n";
        cout<<"Press 5 to give a test\n";
        cout<<"Press 6 to display your results\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
            {
                case 1:S1.enter_details();
                    break;
                case 2: S1.show_eligibility();
                    break;
                case 3:S1.edit_details();
                    break;
                case 4:S1.print_details();
                    break;
                case 5:S1.answertest();
                    break;
                case 6:S1.find_percent();
                    S1.show_result();
                    break;
                default: cout<<"wrong choice\n";
                    break;
                    
            }
        cout<<"\n\nPress 1 to go to main menu 0 to exit: ";
        cin>>a;
    }

        while(a==1);


return 0;
}

