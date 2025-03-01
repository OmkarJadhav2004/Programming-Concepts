#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void fun()          // Defination
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;
        void fun()          // ReDefination
        {
            cout<<"Inside Derived fun \n ";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    Base *bptr = NULL;
    Derived *dptr = NULL;

    bptr = &bobj;   // Nocasting
    dptr = &dobj;   // Nocasting
    bptr = &dobj;   // Upcasting
    dptr = &bobj;   // Downcasting

    return 0;
}