#include<iostream>
using namespace std;
class demo{
    private:
    int m;

    public:
    void data(){
        m=10;
        cout<<"money:-"<<m;

    }
};
int main()
{
    demo d;
    d.data();
}