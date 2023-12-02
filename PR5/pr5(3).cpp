#include<iostream>

using namespace std;

class vote
{
    public:
        void data()
        {
            int age;
            cout<<"Enter age :-";
            cin >> age;
            try{
                
                if(age>=18)
                {
                    throw "It is eligible for vote";
                }else{
                    throw "It is Not eligible for vote";
                }
            }
            catch(const char *age)
            {
                cout<< age<<endl;
            }
        }
};
int main()
{
    vote v;
    v.data();

}