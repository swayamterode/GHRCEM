// Write a program to illustrate the use of unary prefix and postfix increment and decrement operators.
#include<stdio.h>
int  main ()
{
    int var1=0,var2=0;

     // When we do postfix increment of var1 it always displays as 0,but will increment to 1 later .  
     printf("\nThe Value of var1 is:%d\n",var1++);
      
    // When we do  prefix increment of var2 it always displays as 1 though the value of var2 is 0 just beacuse 
    //of ++var2
     printf("The value of var2 is:%d\n\n",++var2);

return 0;

}