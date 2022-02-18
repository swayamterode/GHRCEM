//Write a program to find the largest and smallest among three entered numbers 
//and also display whether the identified largest/smallest number is even or odd.

#include<stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf("Enter the numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    
    if(num1>num2 && num1>num3) //checks wheter num1 is greater than num2 & num3.
    {
        printf("%d is greater & ",num1);
        
        if(num1%2==0)
            printf("%d is even\n\n", num1);
        else
            printf("%d is odd\n\n", num1);
    }
    
    else
    {
        if(num2>num1 && num2>num3) //checks wheter num2 is greater than num1 & num3.
        {
            printf("%d is greater & ",num2);

            if(num2%2==0)
                printf("%d is even\n\n", num2);
            else
                printf("%d is odd\n\n", num2);
        }
        else //checks wheter num3 is greater than num1 & num2.
            printf("%d is greater & ",num3);

            if(num2%2==0)
                printf("%d is even\n\n", num3);
            else
                printf("%d is odd\n\n", num3);
    }
            
return 0;
}