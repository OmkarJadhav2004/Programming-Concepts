#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char FileName[20];
    int FD = 0;

    printf("Enter the file Name that you want to create : \n");
    scanf("%s",FileName);

    unlink(FileName);
    return 0;
}