//Write a C program to calculate area and circumference of a circle.
#include<stdio.h>
int main ()
{
    float pi=3.14;
    float r, area, circum; 
    
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    
    area= pi*r*r;       //Formula for area od circle
    printf(" The area of the cicle is : %f\n",area);
    
    circum=2*pi*r;      //Formula for the circumference of cirlce 
    printf(" The circumferenceos the circle is :%f\n",circum);
return 0;

}