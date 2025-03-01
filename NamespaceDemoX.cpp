#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo 
    {
        public:
        void Display()
        {
            cout<<"Inside Display method\n";
        }
    };
}

int main()
{

    Marvellous::Demo obj;       //Scope Resolution operator
    obj.Display();
    
    return 0;
}