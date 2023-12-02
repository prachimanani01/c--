#include<iostream>
using spacename std;

class base
{
    public:
    virtual void circle()=0;
    virtual void tringle()=0;

};

class derived:public base
{
    public:
        void circle()
        {
            int r;
            float ans;
            cout<<"enter radious:-";
            cin>>r;
            ans=3.14*r*r;
            cout<<"circle area:-"<<ans<<endl;
        }

        void tringle()
        {
            int b,h;
            float ans;
            cout<<"enter tringle base:-";
            cin>>b;
            cout<<"enter tringle height:-";
            cin>>h;
            ans=0.5*b*h;
            cout<<"tringle area:-"<<ans<<endl;
        }
};

int main()
{
    base * h;
    deriverd d;
    b=&d;
    b->circle();
    b->tringle();
    return 0;

}
    