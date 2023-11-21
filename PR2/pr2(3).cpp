#include <iostream>
#include <vector>
using namespace std;
class Employee {
private:
    int emp_id;
    string emp_name;
    string emp_email;
    string emp_designation;
    double emp_salary;

public:
    
    Employee() : emp_id(0), emp_name(""), emp_email(""), emp_designation(""), emp_salary(0.0) {}

    
    Employee(int id, const string& name, const string& email, const string& designation, double salary)
        : emp_id(id), emp_name(name), emp_email(email), emp_designation(designation), emp_salary(salary) {}

    
    void readEmployeeDetails() {
       cout << "Enter Employee ID: ";
        cin >> emp_id;
       cin.ignore();
        cout << "Enter Employee Name: ";
       getline(cin, emp_name);
        cout << "Enter Employee Email: ";
        cin >> emp_email;
       cout << "Enter Employee Designation: ";
        cin >> emp_designation;
        cout << "Enter Employee Salary: ";
        cin >> emp_salary;
    }

   
    void displayEmployeeDetails() const {
        cout << "Employee ID: " << emp_id << "\n"
                  << "Employee Name: " << emp_name << "\n"
                  << "Employee Email: " << emp_email << "\n"
                  << "Employee Designation: " << emp_designation << "\n"
                  << "Employee Salary: " << emp_salary << "\n";
    }
};

int main() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    vector<Employee> employees;

   
    for (int i = 0; i < numEmployees; ++i) {
        Employee emp;
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        emp.readEmployeeDetails();
        employees.push_back(emp);
    }

    
    cout << "\nEmployee Details:\n";
    for (const auto& emp : employees) {
        emp.displayEmployeeDetails();
        cout << "\n---------------------------\n";
    }

    return 0;
}