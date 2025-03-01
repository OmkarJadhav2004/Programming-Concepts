#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void fun()          
        {
            cout<<"Inside Base fun\n";
        }
        void gun()
        {
            cout<<"Inside Base gun\n";
        }
        void sun()
        {
            cout<<"Inside Base sun\n";
        }
        void run()
        {
            cout<<"Inside Base run\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;
        void fun()          
        {
            cout<<"Inside Derived fun\n ";
        }
        void gun()          
        {
            cout<<"Inside Derived gun\n ";
        }
        void sun()          
        {
            cout<<"Inside Derived sun\n ";
        }
        void mun()          
        {
            cout<<"Inside Derived mun\n ";
        }
};

int main()
{
    Derived dobj;
    Base *bptr=NULL;

    bptr=&dobj;

    bptr->fun();    // Base fun
    bptr->gun();    // Base gun
    bptr->sun();    // Base sun
    bptr->run();    // Base run
    //bptr->mun();    // Error

    return 0;
}