//Write C program to evaluate each of the following equations.
//(i) V = u + at. (ii) S = ut+1/2a (iii) T=2*a+√b+9c (iv) H = √b square +p square
#include<stdio.h>
#include<math.h>
int main(){
    float V,u,a,t,T,b,c,p,S,H;
    char symbol=251; // signifies √

    //(i) V = u + at 

    printf("Hello User !\n");
    printf("You have to Enter the values for the Equations V=u+a*t \n");

    printf("Enter the value of u:");
    scanf("%f",&u);

    printf("Enter the value of a:");
    scanf("%f",&a);

    printf("Enter the value of t:");
    scanf("%f",&t);

    V=u+a*t; //This is first equation 
    printf("The Answer for the Equations V=u+a*t is : %f",V);

    //(ii) S = ut+1/2a

    printf("\n\n\nNow User enter the values for S = (u*t+1)/2a \n");

    printf("Enter the value of u:");
    scanf("%f",&u);

    printf("Enter the value of t:");
    scanf("%f",&t);

    printf("Enter the value of a:");
    scanf("%f",&a);
    S=(u*t)/2*a;
    printf("The Answer for the equation S = ut+1/2a is : %f \n",S);


    // (iv)T=2*a+√b+9c
    printf("\n\n\nNow User enter the values for T=2*a+%cb+9c \n", symbol);
    // printf("\n\n\nNow User enter the values for T=2*a+√b+9c \n");

    printf("Enter the value of a:");
    scanf("%f",&a);

    printf("Enter the value of b:");
    scanf("%f",&b);

    printf("Enter the value of c:");
    scanf("%f",&c);

    T=(2*a)+sqrt(b+9*c);
    printf("The Answer for the Equation T=2*a+%cb+9c is : %f",symbol, T);
    // printf("The Answer for the Equation T=2*a+√b+9c is : %f",T);

    //(iv) H = √b square +p square

    printf("\n\n\nNow User enter the values for H = %cb square +p square \n", symbol);

    printf("Enter the value of b:");
    scanf("%f",&b);

    printf("Enter the value of p:");
    scanf("%f",&p);
    H= sqrt(b*b+ p*p);
    printf("The Answer for the Equation H = %cb square +p square %f\n",symbol, H);

    return 0;
}