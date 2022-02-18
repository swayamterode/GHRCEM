//Program: Write a program to insert 5 elements into an array and print the elements of the array.
#include<stdio.h>
int main()
{
int i, arr[5];
printf("Enter the elements into the array:");

for(i=0; i<=4;i++)
{
    scanf("%d",&arr[i]);
}
printf("The elements of the array are:\t");

for(i=0; i<=4;i++)
{
    printf("%d \t", arr[i]); 
}
return 0;
}