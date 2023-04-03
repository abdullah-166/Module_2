#include<stdio.h>
int main()
{
    float number;
    printf("Enter the number: ");
    scanf("%f",&number);
    if(number >= 33)
    {
        printf("\nYou are eligible for next class.");

    }
    else 
    { 
        printf("\nYou are not eligible for next class.");
    }
    return 0;
}