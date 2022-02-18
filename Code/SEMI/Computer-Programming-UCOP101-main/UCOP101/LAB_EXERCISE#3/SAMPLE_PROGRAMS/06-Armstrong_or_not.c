// Write a program to check number is Armstrong or not.
//In the case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself. 
//For example, 153 is an Armstrong number because
//153 = 1*1*1 + 5*5*5 + 3*3*3 
#include <stdio.h>
int main() 
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}