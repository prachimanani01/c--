#include<iostream>

using namespace std;

class Billing 
{
    public :
        int userid,password;
        void createAc()
        {
            cout<<"Enter userid :- ";
            cin>>userid;
            cout<<"Enter password :- ";
            cin>>password;
        }

        void product()
        {
            int into , qty , discount=10 , pen=10 , notebook=30 , coffee=100 , tea=200 , id , pass;
            float tax=5 , total , finaltotal;
            char name[50];
            int choice;
            cout<<"Enter 1 for pen :- "<<endl;
            cout<<"Enter 2 for notebook :- "<<endl;
            cout<<"Enter 3 for coffee :- "<<endl;
            cout<<"Enter 4 for tea :- "<<endl;
            cout<<"Enter 5 Exit"<<endl;
            cin>>choice;

            switch(choice)
            {
                case 1 :

                    cout<<"Enter userid :- ";
                    cin>>id;
                    cout<<"Enter password :- ";
                    cin>>pass;

                    if(userid == id && password == pass)
                    {
                        cout<<"Enter item number :- ";
                        cin>>into;
                        cout<<"Enter item qty :- ";
                        cin>>qty;
                        
                        if(qty > 3)
                        {
                            cout<<"Item number :- "<<into<<endl;
                            cout<<"---Pen---"<<endl;
                            cout<<"Item qty :- "<<qty<<endl;
                            cout<<"Item discount :- "<<discount<<endl;
                            total = pen * qty;
                            cout<<"Total :- "<<total<<endl;
                            total = total - (discount/100);
                            finaltotal = total + (tax/100);
                            cout<<"Final total :- "<<finaltotal<<endl;
                        }
                        else
                        {
                            cout<<"Item number :- "<<into<<endl;
                            cout<<"---Pen---"<<endl;
                            cout<<"Item qty :- "<<qty<<endl;
                            cout<<"Item discount :- "<<discount<<endl;
                            total = pen * qty;
                            cout<<"Total :- "<<total<<endl;
                        }
                    }
                    else
                    {
                        cout<<"Invalid userid and password"<<endl;
                    }
                    break;
                
                case 2 :

                    cout<<"Enter userid :- ";
                    cin>>id;
                    cout<<"Enter password :- ";
                    cin>>pass;

                    if(userid == id && password == pass)
                    {
                        cout<<"Enter item number :- ";
                        cin>>into;
                        cout<<"Enter item qty :- ";
                        cin>>qty;
                        
                        if(qty > 3)
                        {
                            cout<<"Item number :- "<<into<<endl;
                            cout<<"---notebook---"<<endl;
                            cout<<"Item qty :- "<<qty<<endl;
                            cout<<"Item discount :- "<<discount<<endl;
                            total = notebook * qty;
                            cout<<"Total :- "<<total<<endl;
                            total = total - (discount/100);
                            finaltotal = total + (tax/100);
                            cout<<"Final total :- "<<finaltotal<<endl;
                        }
                        else
                        {
                            cout<<"Item number :- "<<into<<endl;
                            cout<<"---notebook---"<<endl;
                            cout<<"Item qty :- "<<qty<<endl;
                            cout<<"Item discount :- "<<discount<<endl;
                            total = notebook * qty;
                            cout<<"Total :- "<<total<<endl;
                        }
                    }
                    else
                    {
                        cout<<"Invalid userid and password"<<endl;
                    }
                    break;

                case 3 :

                    cout<<"Enter userid :- ";
                    cin>>id;
                    cout<<"Enter password :- ";
                    cin>>pass;

                    if(userid == id && password == pass)
                    {
                        cout<<"Enter item number :- ";
                        cin>>into;
                        cout<<"Enter item qty :- ";
                        cin>>qty;
                        
                        if(qty > 3)
                        {
                            cout<<"Item number :- "<<into<<endl;
                            cout<<"---coffee---"<<endl;
                            cout<<"Item qty :- "<<qty<<endl;
                            cout<<"Item discount :- "<<discount<<endl;
                            total = coffee * qty;
                            cout<<"Total :- "<<total<<endl;
                            total = total - (discount/100);
                            finaltotal = total + (tax/100);
                            cout<<"Final total :- "<<finaltotal<<endl;
                        }
                        else
                        {
                            cout<<"Item number :- "<<into<<endl;
                            cout<<"---coffee---"<<endl;
                            cout<<"Item qty :- "<<qty<<endl;
                            cout<<"Item discount :- "<<discount<<endl;
                            total = coffee * qty;
                            cout<<"Total :- "<<total<<endl;
                        }
                    }
                    else
                    {
                        cout<<"Invalid userid and password"<<endl;
                    }
                    break;

                case 4 :

                    cout<<"Enter userid :- ";
                    cin>>id;
                    cout<<"Enter password :- ";
                    cin>>pass;

                    if(userid == id && password == pass)
                    {
                        cout<<"Enter item number :- ";
                        cin>>into;
                        cout<<"Enter item qty :- ";
                        cin>>qty;
                        
                        if(qty > 3)
                        {
                            cout<<"Item number :- "<<into<<endl;
                            cout<<"---tea---"<<endl;
                            cout<<"Item qty :- "<<qty<<endl;
                            cout<<"Item discount :- "<<discount<<endl;
                            total = tea * qty;
                            cout<<"Total :- "<<total<<endl;
                            total = total - (discount/100);
                            finaltotal = total + (tax/100);
                            cout<<"Final total :- "<<finaltotal<<endl;
                        }
                        else
                        {
                            cout<<"Item number :- "<<into<<endl;
                            cout<<"---tea---"<<endl;
                            cout<<"Item qty :- "<<qty<<endl;
                            cout<<"Item discount :- "<<discount<<endl;
                            total = tea * qty;
                            cout<<"Total :- "<<total<<endl;
                            cout<<"Item number :- "<<into<<endl;
                            
                        }
                    }
                    else
                    {
                        cout<<"Invalid userid and password"<<endl;
                    }
                    break;
                
            }
        }
};

int main()
{
    Billing b;
    b.createAc();
    b.product();
}