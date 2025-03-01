#include<stdio.h>
int main()
{
    int Arr[5]={10,20,30,40,50};
    printf("%d\n",Arr[2]);      //30
    printf("%d\n",*(Arr+2));    //30
    printf("%d\n",*(2+Arr));    //30    
    printf("%d\n",2[Arr]);      //30

    return 0;
}