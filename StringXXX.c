#include<stdio.h>
#include<string.h>
int main()
{
    char Arr[] = "Python";
    char *str = Arr;
    int iCnt = 0;
    while (*str != '\0')
    {
        printf("%c\n",*str);    
        str++;
        iCnt++;
    }
    printf("length of string is : %d",iCnt);
    return 0;
}