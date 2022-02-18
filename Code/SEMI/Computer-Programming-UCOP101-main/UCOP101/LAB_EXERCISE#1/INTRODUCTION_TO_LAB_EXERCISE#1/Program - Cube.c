// Write a Program to calculate and display the volume of a CUBE
//having its height (h=10cm), width (w=12cm) and depth (8cm).
#include<stdio.h> 
int main()
{
//start the program
int h,w,d,vol; //variables declaration 
h=10;w=12;d=8; //assign value to variables
vol=h*w*d; //calculation using mathematical formula 
printf("\nThe Volume of the cube is: %d\n\n",vol); //display the volume
return 0;
//end the main program
}