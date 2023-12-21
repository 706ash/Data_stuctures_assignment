#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    string address;

public:
    void initializePerson(string n, string addr) {
        name = n;
        address = addr;
    }

    void displayDetails() const {
        cout << "Name: " << name << "\nAddress: " << address << "\n";
    }
};

class Student : public Person {
private:
    float percentage;

public:
    void initializeStudent(string n, string addr, float percent) {
        initializePerson(n, addr);
        percentage = percent;
    }

    void displayDetails() const {
        Person::displayDetails();
        cout << "Percentage Marks: " << percentage << "%\n";
    }
};

class Teacher : public Person {
private:
    int salary;

public:
    void initializeTeacher(string n, string addr, int sal) {
        initializePerson(n, addr);
        salary = sal;
    }

    void displayDetails() const {
        Person::displayDetails();
        cout << "Salary: $" << salary << "\n";
    }
};

int main() {
    Student student;
    student.initializeStudent("John Doe", "123 Main St", 85.5);

    Teacher teacher;
    teacher.initializeTeacher("Jane Smith", "456 Oak St", 50000);

    cout << "Student Details:\n";
    student.displayDetails();
    cout << "\nTeacher Details:\n";
    teacher.displayDetails();

    return 0;
}
