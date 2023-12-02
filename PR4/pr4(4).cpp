#include<iostream>

using namespace std;

class bank
{
    public :
        int userid,pass,withdrow,amt;
            void createAc()
            {
                cout<<"Enter userid :- ";
                cin>>userid;
                cout<<"Enter password :- ";
                cin>>pass;
                cout<<"how many amount deposite :- ";
                cin>>amt;
            }

            int chekUserLogin()
            {
                int id,password;

                cout<<"Enter userid :- ";
                cin>>id;
                cout<<"Enter password :- ";
                cin>>pass;

                if(userid == id && password == pass)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }

            void withdrowMoney()
            {
                int ans = chekUserLogin();
                int with;

                if(ans == 1)
                {
                    cout<<"How many withdrow money :- ";
                    cin>>with;

                    if(with < amt)
                    {
                        amt = amt - with;
                        cout<<"your current balance is :- "<<amt<<endl;
                    }
                    else
                    {
                        cout<<"your account does not have this much money";
                    }
                }
                else
                {
                    cout<<"userid and password not vaild"<<endl;
                }
            }
};

int main()
{
    bank b;
    int ch;

    do
    {
        cout<<"press 1 open account"<<endl;
        cout<<"press 2 withdrow money"<<endl;
        cout<<"press 3 deposite money"<<endl;  
        cin>>ch;

        switch(ch)
        {
            case 1 :
                b.createAc();
                break;

            case 2 :
                b.withdrowMoney();
                break;
        }
    }while(ch!=0);

    return 0;
}