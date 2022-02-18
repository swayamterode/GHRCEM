#include<stdio.h> 
struct student
{
char name[30]; 
int roll; 
float marks;
} 
s[5];
int main( )
{
int i;
printf("Information of students:");
for (i=0; i<5; ++i){
s[i].roll =i+1;
printf("\n Roll number %d\n", s[i].roll); 
printf("Enter name:");
scanf("%s", s[i].name); 
printf("Enter marks:"); 
scanf("%f", &s[i].marks);
}
printf("\n Displaying Information:\n"); 
for(i=0;i<10;++i)
{
printf("\n Roll number:%d \n", i+1); 
printf("Name:");
puts(s[i].name);
printf("\n Marks:%.1f", s[i].marks);
}
return 0;
}