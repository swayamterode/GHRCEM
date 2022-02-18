//Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
#include <stdio.h>
#include <math.h>
/* Function declarations */
int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    // Call isPrime() functions
    if(isPrime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
    
    // Call isArmstrong() function
    if(isArmstrong(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    
    // Call isPerfect() function
    if(isPerfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }
    
    return 0;
}

/**
 * Check whether a number is prime or not. 
 * Returns 1 if the number is prime otherwise 0.
 */
int isPrime(int num) 
{
    int i;
    
    for(i=2; i<=num/2; i++)  
    {  
        /*  
         * If the number is divisible by any number  
         * other than 1 and self then it is not prime 
         */  
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    
    return 1; 
}

/**
 * Check whether a number is Armstrong number or not. 
 * Returns 1 if the number is Armstrong number otherwise 0.
 */
int isArmstrong(int num) 
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    
    originalNum = num;

    /* Find total digits in num */
    digits = (int) log10(num) + 1;

    /*
     * Calculate sum of power of digits
     */
    while(num > 0)
    {
        // Extract the last digit
        lastDigit = num % 10;

        // Compute sum of power of last digit
        sum = sum + round(pow(lastDigit, digits));

        // Remove the last digit
        num = num / 10;
    }
    
    return (originalNum == sum);
}