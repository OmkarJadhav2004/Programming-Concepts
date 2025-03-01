#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        int Addition(int No1, int No2)
        {
            return No1 + No2;
        }

        virtual int Subtraction(int No1, int No2) = 0; 
      
};
class Derived : public Base{
    public:
        int X,Y;

        int Multiplication(int No1, int No2)
        {
            return No1 * No2;
        }

        int Subtraction(int No1, int No2)
        {
            return No1-No2;
        }
};
int main()
{
    // Base bobj;       Not Allowed
    Derived dobj;

    cout<<"Addition is : "<<dobj.Addition(11,10)<<"\n";
    cout<<"Subtraction is : "<<dobj.Subtraction(11,10)<<"\n";
    cout<<"Multiplication is : "<<dobj.Multiplication(11,10)<<"\n";

    cout<<"Size of Base class : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class : "<<sizeof(dobj)<<"\n";

    return 0;
}