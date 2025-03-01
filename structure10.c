#include<stdio.h>

struct Demo
{
    int no;     //4
    float f;    //4
};              //8bytes
struct PPA
{
    int X;                  //4
    struct Demo dobj;       //8
    int Y;                  //4
};                          //16 bytes
 int main()
 {
    struct PPA obj;
    obj.X=10;
    obj.Y=20;
    obj.dobj.no=11;
    obj.dobj.f=3.14;

    return 0;

 }