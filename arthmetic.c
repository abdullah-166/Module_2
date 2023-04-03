#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two value for sum,sub,multiply & devisor: ");
    scanf("%d %d",&a,&b);
    int sum = a+b;
    int sub = a-b;
    int multi = a*b;
    float divi = (float)a / b;                          
    printf("\nSummation is: %d\n",sum);
    printf("Subtraction is: %d\n",sub);
    printf("Multiplication is: %d\n",multi);
    printf("Division is: %0.2f\n",divi);

    return 0;
}