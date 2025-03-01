#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
    private:
        int B;
    public:
        Demo()
        {
            A=11;
            B=21;
        }
        void Fun()
        {
            cout<<"Value of A : "<<A<<"\n"; //ALLOWED
            cout<<"Value of B : "<<B<<"\n"; //ALLOWED
        }     
};
int main()
{
    Demo obj;
    obj.Fun();                              //ALLOWED
    cout<<"Value of A :"<<obj.A<<"\n";      //ALLOWED
    cout<<"Value of B :"<<obj.B<<"\n";      //NOT ALLOWED
    return 0;
}