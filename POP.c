#include<stdio.h>

int Addition(int No1, int No2)
{
    int Ans=0;
    Ans=No1+No2;
    return Ans;
}

int Subtraction(int No1, int No2)
{
    int Ans=0;
    Ans=No1-No2;
    return Ans;
}

int main()
{
    int value1=0,value2=0,Ret=0;

    printf("Enter First Number: \n");
    scanf("%d",&value1);

    printf("Enter Second Number: \n");
    scanf("%d",&value2);
    
    Ret=Addition(value1,value2);
    printf("Addition is : %d\n",Ret);
    
    Ret=Subtraction(value1,value2);
    printf("Subtraction is : %d\n",Ret);

    return 0;
}