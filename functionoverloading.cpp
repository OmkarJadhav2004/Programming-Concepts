#include<iostream>
using namespace std;

class Demo
{
    public:
        int Addition(int A,int B)   //definition  activa
        {
            return A+B;
        }
        double Addition(double A, double B)     //overloaded definition  i10
        {
            return A+B;
        }
        int Addition(int A, int B, int C)       //overloaded definition  ertiga
        {
            return A+B+C;
        }

};
int main()
{
    Demo obj;
    cout<<obj.Addition(10,11)<<"\n";
    cout<<obj.Addition(10.90,11.99)<<"\n";
    cout<<obj.Addition(10,11,20)<<"\n";

    return 0;
}
