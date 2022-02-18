//Write program to calculate simple and compound interest.

#include<stdio.h>
#include<math.h>
float simple_intrest();
float compund_intrest();

int main()
{
    
    printf("\n\nHere we calculate Simple Interest & Compund Interest\n");
    
    float a= simple_intrest();
    printf("\nThe Simple intrest is %f\n",a);

    float b= compund_intrest() ;
    printf("\nCompound Interest = %f\n\n",b);
    
}
 float simple_intrest() //S.I. = (Principal × Rate × Time)/100
{
        int p,r,t,si;
	
        printf("Enter Principle:");
        scanf("%d",&p);
        printf("Enter Rate:");
        scanf("%d",&r);
        printf("Enter Time:");
        scanf("%d",&t);
        si = (p * r * t)/100;    /*Formula for calculating simple interest*/
            
        return si;

}
//C.I. = P [(1 + i)pow (n) – 1]   where P = principal  //i = nominal annual interest rate in percentage terms
// & n = number of compounding periods    
float compund_intrest() 
{
float principle, rate, time, CI;
        printf("\n2.Compund Interest\n");

        /* Input principle, time and rate */
        printf("Enter Principle (amount):");
        scanf("%f", &principle);

        printf("Enter Time:");
        scanf("%f", &time);

        printf("Enter Rate:");
        scanf("%f", &rate);

        /* Calculate compound interest */
        CI = principle* (pow((1 + rate / 100), time));
        return CI;

}