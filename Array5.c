#include<stdio.h>
int main()
{
    int Arr[4]={10,20,30,40};

    printf("%d\n",Arr[0]);  //10
    printf("%d\n",Arr[1]);  //20
    printf("%d\n",Arr[2]);  //30
    printf("%d\n",Arr[3]);  //40

    printf("%lu\n",sizeof(Arr));        //16
    printf("%lu\n",sizeof(Arr[0]));     //4
    printf("%lu\n",sizeof(Arr[2]));     //4

    printf("%d\n",Arr);         //6422288
    printf("%d\n",&Arr);        //6422288
    printf("%d\n",&Arr[0]);     //6422288
    printf("%d\n",&Arr[2]);     //6422296
    printf("%d\n",&Arr[3]);     //6422300

    return 0;
}