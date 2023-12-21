#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string first_name;
    string last_name;
    int monthly_salary;

public:
    // Constructor to initialize data members
    Employee(string first,string last, int salary) {
        setFirstName(first);
        setLastName(last);
        setMonthlySalary(salary);
    }

    // Setters
    void setFirstName(string first) {
        first_name = first;
    }

    void setLastName(string last) {
        last_name = last;
    }

    void setMonthlySalary(int salary) {
            monthly_salary = salary;
    }

    // Getters
    string getFirstName() {
        return first_name;
    }

    string getLastName() {
        return last_name;
    }

    int getMonthlySalary() {
        return monthly_salary;
    }

    // Member function to calculate and display yearly salary
    int displayYearlySalary() {
        return monthly_salary*12;
    }
};

int main() {
    // Example usage of the Employee class
    Employee emp("Tyrone", "Crasto", 5000);

    // Displaying information and yearly salary
    cout << "Employee Information:" << endl;
    cout << "First Name: " << emp.getFirstName() << endl;
    cout << "Last Name: " << emp.getLastName() << endl;
    cout << "Monthly Salary: $" << emp.getMonthlySalary() << endl;
    cout<<"Display yearly salary: "<<emp.displayYearlySalary();
    return 0;
}
