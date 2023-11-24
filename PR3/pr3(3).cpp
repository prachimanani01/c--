#include <iostream>
#include <string>

using namespace std;

class Employee 
{
    protected:
        string emp_name;
        string emp_email;
        string emp_password;

    public:
        void getEmployeeInfo() 
        {
            cout << "Enter employee name: ";
            getline(cin, emp_name);

            cout << "Enter employee email: ";
            getline(cin, emp_email);

            cout << "Enter employee password: ";
            getline(cin, emp_password);
        }

        void displayEmployeeInfo() {
            << "Employee Information:" <<endl;
            << "Name: " << emp_name <<endl;
            << "Email: " << emp_email <<endl;
            << "Password: " << emp_password <<endl;
        }
};


class ContactInfo 
{
    protected:
        string emp_contact;
        string emp_city;

    public:
        void getContactInfo() 
        {
            cout << "Enter employee contact: ";
            getline(cin, emp_contact);

            cout << "Enter employee city: ";
            getline(cin, emp_city);
        }

        void displayContactInfo() {
            << "Contact Information:" <<endl;
            << "Contact: " << emp_contact <<endl;
            << "City: " << emp_city <<endl;
        }
};

class UserRole {
    protected:
        string emp_role;

    public:
        void getUserRole() {
            cout << "Enter employee role: ";
            getline(cin, emp_role);
        }

    void displayUserRole() {
        cout << "User Role: " << emp_role <<endl;
    }
};

class EmployeeInfo : public Employee, public ContactInfo, public UserRole {
public:

    void getEmployeeDetails() {
        getEmployeeInfo();
        getContactInfo();
        getUserRole();
    }

    void displayEmployeeDetails() {
        displayEmployeeInfo();
        displayContactInfo();
        displayUserRole();
    }
};

int main() {
    
    EmployeeInfo employee;

    employee.getEmployeeDetails();
    cout << "\nEmployee Details:\n";
    employee.displayEmployeeDetails();

    return 0;
}
