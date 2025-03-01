#include<iostream>
using namespace std;

class Base
{
    public:
        void fun()          // Defination
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base{
    public:
        void fun()          // ReDefination
        {
            cout<<"Inside Derived fun \n ";
        }
};
int main()
{
    cout<<sizeof(Base)<<"\n";       // 1 byte

    Base bobj;
    bobj.fun();

    Derived dobj;
    dobj.fun();

    return 0;
}