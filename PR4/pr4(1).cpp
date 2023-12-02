#include<iostream>
using namespace std;


#define MAX 10

class student {
private :
    char name[30];
    int id,std;
    char email[100];
    char hobby[30];
    char gender[10];

public :
    
    void getDetails(void);
    
    void putDetails(void);
};


void student::getDetails(void)
{
     cout << "Enter id: ";
    cin >> id;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter standard: ";
    cin >> std;
    cout << "Enter email: ";
    cin >> email;
    cout << "Enter hobby: ";
    cin >> hobby;

   
}


void student::putDetails(void)
{
    cout << "Student details:\n";
    cout <<"id :"<<id <<endl<< "Name:" << name <<endl<< "standard :"<<std <<endl<<"email :"<<email <<endl<<"hobby :"<<hobby<<endl;
}

int main()
{
    student std[MAX];
    int n, loop;

    cout << "Enter total number of students: ";
    cin >> n;

    for (loop = 0; loop < n; loop++) {
        cout << "Enter details of student " << loop + 1 << ":<<endl";
        std[loop].getDetails();
    }

    cout << endl;

    for (loop = 0; loop < n; loop++) {
        cout << "Details of student " << (loop + 1) << ":<<endl";
        std[loop].putDetails();
    }

    return 0;
}