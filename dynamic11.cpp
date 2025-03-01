#include<iostream>
using namespace std;
int main()
{
    int Arr[5];

    int *ptr=NULL;

    //step1 : Allocate the memory
    ptr = new int[5];

    //step : use the memory
    //logic

    //step3 : Deallocate the memory
    delete []ptr;
    
    return 0;
}