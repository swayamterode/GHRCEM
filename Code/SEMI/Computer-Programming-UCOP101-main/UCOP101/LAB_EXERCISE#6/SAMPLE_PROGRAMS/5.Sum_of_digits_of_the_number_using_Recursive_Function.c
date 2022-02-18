// Write a program to find sum of digits of the number using Recursive Function.
#include <stdio.h>

// Function declaration 
int sumOfDigits(int num);


int main()
{
    int num, sum;
    
    printf("Enter any number to find sum of digits:");
    scanf("%d", &num);
    
    sum = sumOfDigits(num);
    
    printf("\nSum of digits of %d = %d\n", num, sum);
    
    return 0;
}


// Recursive function to find sum of digits of a number
 
int sumOfDigits(int num)
{
    // Base condition
    if(num == 0)
        return 0;
        
    return ((num % 10) + sumOfDigits(num / 10));
}