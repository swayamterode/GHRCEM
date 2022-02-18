// Write a program to find whether a character is consonant or vowel using
// switch statement.
#include <stdio.h>

int main()
{
    char ch;

    /* Input an alphabet from user */
    printf("Enter any alphabet: ");
    scanf("%c", &ch); //taking input from user.

    /* Switch value of ch */
    switch(ch)
    {
        case 'a':
            printf("\na is Vowel\n\n");
            break;
        case 'e': 
            printf("\ne is Vowel\n\n");
            break;
        case 'i': 
            printf("\ni is Vowel\n\n");
            break;
        case 'o': 
            printf("\no is Vowel\n\n");
            break;
        case 'u': 
            printf("\nu is Vowel\n\n");
            break;
        case 'A': 
            printf("\nA is Vowel\n\n");
            break;
        case 'E': 
            printf("\nE is Vowel\n\n");
            break;
        case 'I': 
            printf("\nI is Vowel\n\n");
            break;
        case 'O': 
            printf("\nO is Vowel\n\n");
            break;
        case 'U': 
            printf("\nU is Vowel\n\n");
            break;
        default: 
            printf("\nYou Entered Consonant\n\n");
    }

    return 0;
}