#include<stdio.h>
int main()
{
char name[20]; 
int rollno;
float sub1, sub2, sub3, sub4,  sum, score; 
printf("Enter name of student: "); 
scanf("%s",&name);
printf ("\nEnter Roll Number: "); 
scanf("%d", &rollno);
printf ("\nEnter Marks in 4 Subjects:\n"); 
scanf("%f%f%f%f", &sub1, &sub2, &sub3, &sub4); 
sum=sub1+sub2+sub3+sub4;
score = (sum/500)*100;
printf("\nName of student: %s", name); 
printf("\nRoll Number: %d", rollno);
printf ("\nPercentage score secured: %2.2f%c\n\n", score,'%'); 
return 0;
}