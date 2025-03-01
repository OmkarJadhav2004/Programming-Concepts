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

int main()
{
    Derived dobj;

    cout<<"Inside main function \n";
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";

    dobj.fun();
    dobj.gun();

    return 0;
}