// Write a program to swap values of two variables with and without using third variable.

#include<stdio.h>  
 int main()    
{    
int a, b;    
printf("Enter the value of You want to swap with other :");
scanf("%d",&a);
printf("Enter the value of You want to swap with other :");
scanf("%d",&b);
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10)    
printf("\nAfter swap a=%d b=%d\n",a,b);
return 0;
}  