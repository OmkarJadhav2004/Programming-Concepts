#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        virtual void fun()      //1000     
        {
            cout<<"Inside Base fun\n";
        }
        void gun()              //2000
        {
            cout<<"Inside Base gun\n";
        }
        virtual void sun()      //3000
        {
            cout<<"Inside Base sun\n";
        }
        virtual void run()      //4000
        {
            cout<<"Inside Base run\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;
        virtual void fun()        //5000  
        {
            cout<<"Inside Derived fun\n";
        }
        void gun()                //6000
        {
            cout<<"Inside Derived gun\n";
        }
        virtual void mun()        //7000 
        {
            cout<<"Inside Derived mun\n";
        }
        void run()              //8000 
        {
            cout<<"Inside Derived run\n";
        }
};

int main()
{
    cout<<"Size of Base class : "<<sizeof(Base)<<"\n";
    cout<<"Size of derived class : "<<sizeof(Derived)<<"\n";
    
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