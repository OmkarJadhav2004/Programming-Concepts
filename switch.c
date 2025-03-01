#include<stdio.h>
int main()
{
    int standard =0;
    
    printf("Enter your standard: \n");
    scanf("%d",&standard);

    switch(standard)
    {
        case 1:
            printf("Your Exam is at 8 AM\n");
            break;
        case 2:
            printf("Your Exam is at 9 AM\n");
            break;
        case 3:
            printf("Your Exam is at 10 AM\n");
            break;
        case 4:
            printf("Your Exam is at 11 AM\n");
            break;

        default:
            printf("You entered wrong choice\n");
        
    }
    return 0;
}