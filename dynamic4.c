#include<stdio.h>       // standard input output
#include<stdlib.h>      // standard library

int main()
{
    int *ptr=NULL;

    ptr = (int *)malloc(5*sizeof(int));

    ptr = (int *)realloc(ptr,7*sizeof(int));        //case 1

    ptr = (int *)realloc(ptr,3*sizeof(int));        //case 2 

    ptr = (int *)realloc(NULL,5*sizeof(int));         // works like malloc

    ptr = (int *)realloc(ptr,0);                      // works like free
    
    return 0;
}