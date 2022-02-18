// If a four-digit number is input through the keyboard,
// Write a program to obtain the sum of the first digit and last digit of this number.
#include<stdio.h>
int main()
{
    int n, f, l, sum, num, d=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    while(num!=0)
    {
        num = num/10;
        d = d*10;
    }
    d = d/10;
    f = n/d;
    l = n%10;
    sum = f+l;

    printf("Sum of first and last digit of %d is: %d",n,sum);
}