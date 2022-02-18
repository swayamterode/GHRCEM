// Write a program to find the largest of three numbers
#include<stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf("Enter the numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    
    if(num1>num2 && num1>num3)
    printf("%d is greater.\n\n",num1);
    else
    {
        if(num2>num1 && num2>num3)
        printf("%d is greater.\n\n",num2);
        else
        printf("%d is greater.\n\n",num3);
    }
        
    return 0;
}