#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: \n");
    scanf("%d",&age);
    char doc;
    if(age >= 18)
    {
        printf("Do you have any Birth certificate or PP or NID?\n");
        scanf(" %c",&doc);
        if(doc == 'y')
        {
            printf("Congratulation!!!!\nYou will get the vaccine.\n");
        }
        else 
        {
            printf("You will not get the vaccine.\n");
        }
    }
    else
    {
        printf("You are not eligible to get the vaccine.\n");
    }
}