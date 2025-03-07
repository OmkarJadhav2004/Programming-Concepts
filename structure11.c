#include<stdio.h>

#pragma pack(1)

struct Demo
{
    int i;      //4
    float f;    //4
    char ch;    //1
    double d;   //8
};              //summation:17

union Hello
{
    int i;      //4
    float f;    //4
    char ch;    //1
    double d;   //8  //sizeof(union)=8
};              // Largest : 8

int main()
{
    struct Demo dobj;
    union Hello hobj;
    printf("Size of structure is : %lu\n",sizeof(dobj));
    printf("Size of union is : %lu\n",sizeof(hobj));

    hobj.i=97;

    return 0;
}