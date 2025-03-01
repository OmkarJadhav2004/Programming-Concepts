#include<stdio.h>
void Display()
{
    printf("Inside Display Function\n");
}
int main()
{
    printf("Inside Main Function\n");

    Display();
    printf("End of main function");
    return 0;
}