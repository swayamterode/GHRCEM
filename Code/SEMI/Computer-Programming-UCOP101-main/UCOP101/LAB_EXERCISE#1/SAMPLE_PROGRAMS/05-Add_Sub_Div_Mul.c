//Write a C program to perform addition, subtraction, division and multiplication of two numbers.
#include<stdio.h>
int main(){  

    int a,b; 
    int add, sub,div,multi;
    printf("Enter the two number :");
    scanf("%d%d",&a,&b);
    add=a+b;
    printf("The Addition of two numbers is :%d\n",add);
    sub=a-b;
    printf("The subtraction of two numbers is: %d\n",sub);
    div=a/b;
    printf("The Divison of two numbers is : %d\n", div);
    multi=a*b;
    printf("The multipication of two numbers is : %d\n",multi);
    return 0;

}