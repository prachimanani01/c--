#include <iostream>
#include <string>

using namespace std;


class User {
public:
    string email;
    string pass;
};

int main() {

    User users[5];

    users[0].email = "1@abc.com";
    users[0].pass = "pass1";

    users[1].email = "2@abc.com";
    users[1].pass = "pass2";

    users[2].email = "3@abc.com";
    users[2].pass = "pass3";

    users[3].email = "4@abc.com";
    users[3].pass = "pass4";

    users[4].email = "5@abc.com";
    users[4].pass = "pass5";

    string Email,Password;

    cout<<"Enter email :- ";
    cin>>Email;
    cout<<"Enter password :- ";
    cin>>Password;

    bool logIn = false;

    for(int i = 0; i < 5; ++i) 
    {
        if(users[i].email == Email && users[i].pass == Password) 
        {
            logIn = true;
            break;
        }
    }

    if (logIn) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Login not successful!"<<endl;
    }

    return 0;
}
