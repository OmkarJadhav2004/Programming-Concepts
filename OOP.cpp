#include<iostream>
using namespace std;

class Arithmetic 
{
    public:
        int No1;
        int No2;

        Arithmetic(int A, int B)
        {
            No1=A;
            No2=B;
        }
        int Addition()
        {
            int Ans=0;
            Ans=No1+No2;
            return Ans;
        }

        int Subtraction()
        {
            int Ans=0;
            Ans=No1-No2;
            return Ans;
        }

};

int main()
{
    int value1=0, value2=0, Ret=0;

    cout<<"Enter first Number : \n";
    cin>>value1;

    cout<<"Enter second Number : \n";
    cin>>value2;

    Arithmetic obj(value1,value2);
    Ret=obj.Addition();
    cout<<"Addition is : "<<Ret<<"\n";
    Ret=obj.Subtraction();
    cout<<"Subtraction is : "<<Ret<<"\n";
    return 0;
}