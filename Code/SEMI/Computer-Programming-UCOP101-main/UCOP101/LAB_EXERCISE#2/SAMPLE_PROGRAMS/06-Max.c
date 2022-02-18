//Write a program to input two numbers and display the maximum number.
#include<stdio.h>
int main()
{
    int num1,num2;  // Two numbers as num1 and num2

    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);

    if(num1>num2)
    printf("%d is Maximun number." ,num1);
    else
    printf("%d is Maximun number.",num2);

    return 0;
}