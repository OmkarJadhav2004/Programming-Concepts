#include<stdio.h>

int main()
{
    int price[]={67,89,45,88,90,34};
    printf("%d\n",price[0]);    //67
    printf("%d\n",price[2]);    //45
    printf("%d\n",price[5]);    //34

    printf("%lu\n",sizeof(price));      //24
    printf("%lu\n",sizeof(price[1]));   //4
    printf("%lu\n",sizeof(price[3]));   //4
    return 0;
}