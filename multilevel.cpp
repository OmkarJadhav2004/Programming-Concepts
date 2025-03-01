#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base Constructor \n";
            i=10;
            j=20; 
        }
        ~Base()
        {
            cout<<"Inside Base Destructor \n";  
        }
        void fun()
        {
            cout<<"Inside base fun \n";
        }

};
class Derived : public Base
{
    public:
        int x,y;

         Derived()
        {
            cout<<"Inside Derived Constructor \n";
            x=30;
            y=40;
        }
        ~Derived()
        {
            cout<<"Inside Derived Destructor \n";
        }
        void gun()
        {
            cout<<"Inside derived gun \n";
        }


};

class Derivedx : public Derived
{
    public:
        int a,b;
        Derivedx()
        {
            cout<<"Inside Derivedx Constructor\n";
            a=50;
            b=60;
        }
        ~Derivedx()
        {
            cout<<"Inside Derivedx Destructor\n";
        }
        void sun()
        {
            cout<<"Inside Derivedx Sun\n";
        }
};

int main()
{
    Derivedx dobj;
    //constructors : Base->Derived->Derivedx

    cout<<"Inside main function \n";

    cout<<"Size of Base class :"<<sizeof(Base)<<"\n";       //8
    cout<<"Size of Derived class :"<<sizeof(Derived)<<"\n"; //16
    cout<<"Size of Derivedx class :"<<sizeof(Derivedx)<<"\n"; //24  
    cout<<dobj.i<<"\n"; //10
    cout<<dobj.j<<"\n"; //20
    cout<<dobj.x<<"\n"; //30
    cout<<dobj.y<<"\n"; //40
    cout<<dobj.a<<"\n"; //50
    cout<<dobj.b<<"\n"; //60

    dobj.fun();
    dobj.gun();
    dobj.sun();

    //Destructor : Derivedx->Derived->Base
    return 0;
}
