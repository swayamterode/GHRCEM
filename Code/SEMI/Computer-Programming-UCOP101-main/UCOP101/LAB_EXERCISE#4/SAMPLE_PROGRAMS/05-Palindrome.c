// An integer is a palindrome if the reverse of that number is equal to the original number.
#include <stdio.h>
int main() {
    int number, reversedNumber = 0, remainder, originalNumber;
    printf("Enter an integer: ");
    scanf("%d", &number);
    originalNumber = number;

    // reversed integer is stored in reversedN
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (originalNumber == reversedNumber)
        printf("\n%d is a palindrome.\n", originalNumber);
    else
        printf("\n%d is not a palindrome.\n", originalNumber);

    return 0;
}
