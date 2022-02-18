// Write a program to print day name using switch case.
#include<stdio.h>
int main()
{
    int week;
    
    /* Input week number from user */
    printf("Enter week number(1-7): ");
    scanf("%d", &week);
    
    switch(week)
    {
        case 1: 
            printf("\nMonday\n\n");
            break;
        case 2: 
            printf("\nTuesday\n\n");
            break;
        case 3: 
            printf("\nWednesday\n\n");
            break;
        case 4: 
            printf("\nThursday\n\n");
            break;
        case 5: 
            printf("\nFriday\n\n");
            break;
        case 6: 
            printf("\nSaturday\n\n");
            break;
        case 7: 
            printf("\nSunday\n\n");
            break;
        default: 
            printf("\nInvalid input! Please enter week number between 1-7.\n\n");
    }

    return 0;
}