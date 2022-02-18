//Write a program to compute grade of students using if else ladder. The grades are assigned as followed:
      
//      Marks                Grade
//      percentage < 50             D
// 50 ≤ percentage < 60             C
// 60 ≤ percentage < 70             B
// 70 ≤ percentage < 80             B+
// 80 ≤ percentage < 90             A
// 90 ≤ percentage ≤ 100            A+

#include<stdio.h>
int main()
{
float m1,m2,m3,m4,m5,score,grade,percentage ;
char name[30];
int rollno;

 printf( "Enter student name:");
   gets( name );

printf("Enter the student Roll Number:");
scanf("\n%d",&rollno);

printf("Enter the Marks of student in IDDC:");
scanf("\n%f",&m1);

printf("Enter the Marks of Student in Physics:");
scanf("\n%f",&m2);

printf("Enter the Marks of student in Foundation of Data Analytics:");
scanf("\n%f",&m3);

printf("Enter the Marks of student in Computer Programming:");
scanf("\n%f",&m4);

printf("Enter the Marks of student in Mathemactics:");
scanf("\n%f",&m5);

score=m1+m2+m3+m4+m5;   //Total score of student 

printf("The total score of student: %f\n",score);

percentage=(score/500)*100;
printf("Pecentage %s has scored is:%f\n",name,percentage);

if(percentage < 0 || percentage > 100)
{
printf("Wrong Entry\n");}

else if(percentage<50)
{
printf("Student %s has got D Grade.\n",name);
}
    
else if(percentage>=50 && percentage<60)
{
printf("Student %s has got C Grade.\n",name);
}

else if(percentage>=60 && percentage<70)
{
printf("Student %s has got B Grade.\n",name);
}

else if(percentage>=70 && percentage<80)
{
    printf("Student %s has got B+ Grade.\n",name);
}

else if(percentage>=80 && percentage<=95)
{
printf("Student %s has got A Grade.\n",name);
}
else
{
printf("Student %s has got A+ Grade.\n",name);
}

        
printf("\nThank you!\n");
return 0;
}
