// Write a  program to print the sum of digits of a number using for loop
#include<stdio.h>
int main()
{
    int num, sum;

    printf("Enter number: ");
    scanf("%d",&num);

    for(sum=0;num>0;num=num/10)
    {    
        sum = sum + (num%10);
    }

    printf("Sum of digits: %d\n\n",sum);
    return 0;
}