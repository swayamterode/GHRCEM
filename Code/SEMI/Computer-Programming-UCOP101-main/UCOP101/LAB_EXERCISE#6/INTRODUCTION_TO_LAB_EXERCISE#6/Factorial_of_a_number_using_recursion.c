//Write a program to calculate factorial of a number using recursion.
#include<stdio.h>
long factorial(int); //Function declaration int main()
int main()
{

int num; long fact;
printf("Enter a number to find factorial: \n");
scanf("%d", &num);

if(num<0)
printf("Factorial of negative no. is not defined. \n");
else
{
fact = factorial(num); printf("%d!=%d \n", num, fact);
}
return 0;
}
long factorial(int num)
//Function definition long factorial(int num)
{
if(num==0)
return 1;
else
return(num*factorial(num-1));
}