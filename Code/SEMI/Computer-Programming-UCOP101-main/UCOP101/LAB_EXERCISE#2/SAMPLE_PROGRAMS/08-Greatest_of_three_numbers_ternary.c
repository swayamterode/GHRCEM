//Write a program to find the largest of three numbers using ternary operators.
# include <stdio.h>
 
int main()
{
    int num1, num2, num3, greatest ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &num1, &num2, &num3) ;
 
    greatest = (num1>num2 && num1>num3) ? (num1) : (num2>num1 && num2>num3? num2: num3);

    printf("\nThe biggest number is : %d", greatest) ;
return 0;

}
