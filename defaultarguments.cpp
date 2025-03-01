#include<iostream>
using namespace std;

float calculateArea(float Rad, float PI = 3.14f)
{
    float Ans = 0.0f;
    Ans = PI * Rad * Rad;
    return Ans;
}
int main()
{
    float Ret = 0.0f;

    //Ret = calculateArea(10.5f,3.14f);
    //cout<<"Area of circle is : "<<Ret<<"\n";

    Ret = calculateArea(10.5f);
    cout<<"Area of circle is : "<<Ret<<"\n";

    Ret = calculateArea(10.5f,7.20f);
    cout<<"Area of circle is : "<<Ret<<"\n";

    return 0;
}