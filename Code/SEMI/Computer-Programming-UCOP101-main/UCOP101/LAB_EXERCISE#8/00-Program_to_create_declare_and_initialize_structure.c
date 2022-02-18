//Write a C program to create, declare and initialize structure.
#include <stdio.h>
/*structure declaration*/ 
struct employee
{
char name[30]; 
int empId; 
float salary;
};
int main()
{
/*declare and initialization of structure variable*/ 
struct employee emp = { "Anil",201,80000.00 };
printf("\n Name: %s" ,emp.name); 
printf("\n Id: %d" ,emp.empId); 
printf("\n Salary: %f\n",emp.salary); 
return 0;
}