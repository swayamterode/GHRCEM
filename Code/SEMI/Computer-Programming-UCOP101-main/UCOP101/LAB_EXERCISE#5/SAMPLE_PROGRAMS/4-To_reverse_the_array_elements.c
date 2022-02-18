// Write a Program to reverse the array elements in C Programming.

#include<stdio.h>
int main()
{
//fill the code;
int n;
printf("Enter the array:");
scanf("%d",&n);
int arr[n];
int i;
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
printf("Reversed array is:\t");
for(i = n-1; i >= 0; i--)
{
printf("%d\t",arr[i]);
}
return 0;
}