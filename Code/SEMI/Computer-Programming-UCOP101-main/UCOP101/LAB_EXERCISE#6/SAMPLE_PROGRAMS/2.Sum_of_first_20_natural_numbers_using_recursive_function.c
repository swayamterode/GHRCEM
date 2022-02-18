//Write a program to calculate sum of first 20 natural numbers using recursive function.
#include <stdio.h>
int addNumbers(int n);
int main() 
{
    int num=20;
    printf("\nSum of first 20 natural numbers = %d\n", addNumbers(num));// function call
    return 0;
}

int addNumbers(int n) 
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}