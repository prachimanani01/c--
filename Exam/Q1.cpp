#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int yearOfJoining;
    string address;

public:

    Employee(const string& empName, int joinYear, const string& empAddress)
        : name(empName), yearOfJoining(joinYear), address(empAddress) {}


    void displayInfo() const {
        cout << "Name :- " << name << endl;
        cout << "Year of Joining :- " << yearOfJoining << endl;
        cout << "Address :- " << address << endl << endl;
    }
};

int main() {
    
    Employee emp1("PRACHI", 1994, " 64C- WallsStreat");
    Employee emp2("AAGNA", 2000, "68D- WallsStreat");
    Employee emp3("SHIVANI", 1999, "26B- WallsStreat");

    cout << "Employee Information:" << endl;
    
    emp1.displayInfo();
    emp2.displayInfo();
    emp3.displayInfo();

}
