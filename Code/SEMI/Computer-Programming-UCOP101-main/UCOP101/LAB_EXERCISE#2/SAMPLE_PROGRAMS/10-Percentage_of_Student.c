// Write a program to take input of name, rollno and marks obtained by a
// student in 4 subjects of 100 marks each and display the name, rollno with
// percentage score secured.
#include<stdio.h>
float score();
int main ()
{
    char name[30];
    int rollno; 
    float m1,m2,m3,m4,m5,sum;
    printf("Hello User !\n");
    printf("Enter the name of the student:");
    scanf("%s",&name);
    printf("Enter the Roll Number of the student:");
    scanf("%d",&rollno);
    printf("Enter the marks in subjects\n");
    printf("\nEnter the marks  in Mathematics:");
    scanf("%f",&m1);
    printf("\nENter the marks in IDDC:");
    scanf("%f",&m2);
    printf("\nEnter the marks in Physics:");
    scanf("%f",&m3);
    printf("\nEnter the marks in Computer Programming:");
    scanf("%f",&m4);
    printf("\nEnter the marks in FDA:");
    scanf("%f",&m5);
    sum=m1+m2+m3+m4+m5;
    printf("\nTotal marks you have scored is :%f\n",sum);
 
    float score = (sum/500)*100;
    printf("\nThe Percentage you have Scored is :%f\n",score);
}
