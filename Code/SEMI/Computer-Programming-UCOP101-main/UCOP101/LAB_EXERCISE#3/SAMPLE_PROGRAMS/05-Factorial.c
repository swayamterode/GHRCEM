//Write a program to find the factorial of a number.
#include<stdio.h>
int main ()
{

    int i,fact=1,number;
    
    printf("Enter a number:");
    scanf("%d",&number); //n=4 suppose

    for(i=1;i<=number;i++) //1<=4 then it will do fac=fact*i => 1*1 then i++ ie.i=2 then same process
    {                      //2<=4 then it will do fac=fact*i => 2*1 then i++ ie.i=3 then same process
      fact=fact*i;         //3<=4 then it will do fac=fact*i => 3*1 then i++ ie.i=4 then same process
    }                      //4<=4 then it will do fac=fact*i => 4*1 then i++ ie.i=5 then same process
                           //5<=4 false and the code will terminate.
    
    printf("%d! is:%d\n\n",number,fact);
    
}