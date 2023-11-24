#include <iostream>

using namespace std;

class Mother 
{
    public:
    
        void display() 
        {
            cout << "Mother class display method called" <<endl;
        }
};


class Daughter : public Mother 
{
    public:

        void display() 
        {
            cout << "Daughter class display method called" <<endl;
        }
};

int main() {

    Daughter daughterObj;

    daughterObj.display();

    return 0;
}

