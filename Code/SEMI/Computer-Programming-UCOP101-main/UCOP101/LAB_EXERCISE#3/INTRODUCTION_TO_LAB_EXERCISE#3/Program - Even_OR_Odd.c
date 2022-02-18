//Write a program to print whether a given number is even or odd.

#include<stdio.h>
int main()
{
int num;
printf("Enter the number:"); 
scanf("%d",&num); 

    if(num%2==0)
    printf("\n%d is even\n\n", num);
    else
    printf("\n%d is odd\n\n", num);

return 0;
}
