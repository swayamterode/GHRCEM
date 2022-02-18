//Write a program to determine whether the input character is capital or small letter, digits or special symbol.


//   Characters	            ASCII Values
//     A – Z	                  65 – 90
//     a – z	                  97 – 122
//     0 – 9	                  48 – 57
// special symbols	              0 - 47, 58 - 64, 91 - 96, 123 – 127

#include<stdio.h>
int main()
{
    char ch;
    
    printf("Input some value (letter, digit or special symbol):");
    scanf("%c", &ch);

    if( ch>=65 && ch<=90)
    {
        printf("Character you entered is Capital Letter i.e:%c\n\n",ch);
    }
    else if(ch>=97 && ch<=122)
    {
        printf("Character you entered is Small Letter i.e:%c\n\n",ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("Input given by you is digit i.e:%c\n\n",ch);
    }
    else if ( (ch>0 && ch<=47) || (ch>=58 && ch<=64)|| (ch>=91 && ch<=96) || (ch>=123 && ch<=127) )
		printf("Character you Entered is a special symbol i.e:%c\n\n",ch);

}