#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Employee structure to store details
struct Employee {
    string name;
    int id;
    string designation;
    string address;
    double salary;
};

int main() {
    int n;

    // Get the number of employees
    cout << "Enter the number of employees: ";
    cin >> n;

    // Open the file for writing
    ofstream outputFile("employee_data.txt");

    // Input and write employee details to the file
    for (int i = 0; i < n; ++i) {
        Employee emp;

        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore(); // Ignore newline character left in the buffer
        getline(cin, emp.name);

        cout << "ID: ";
        cin >> emp.id;

        cout << "Designation: ";
        cin.ignore(); // Ignore newline character left in the buffer
        getline(cin, emp.designation);

        cout << "Address: ";
        getline(cin, emp.address);

        cout << "Salary: ";
        cin >> emp.salary;

        // Write employee details to the file
        outputFile << emp.name << " " << emp.id << " " << emp.designation << " " << emp.address << " " << emp.salary << endl;
    }

    // Close the file
    outputFile.close();

    // Open the file for reading
    ifstream inputFile("employee_data.txt");

    // Read and print details of engineers
    cout << "\nDetails of Engineers:\n";
    while (inputFile >> ws, !inputFile.eof()) {
        Employee emp;
        inputFile >> emp.name >> emp.id >> emp.designation >> emp.address >> emp.salary;

        if (emp.designation == "engineer") {
            cout << "Name: " << emp.name << ", Salary: " << emp.salary << endl;
        }
    }

    // Close the file
    inputFile.close();

    return 0;
}
