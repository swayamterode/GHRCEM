// Write a program to print number in reverse order with a difference of 2.
#include <stdio.h>
int magic(int x, int y)
{
    if (y == 0)
        return x;
    return magic(x ^ y, (~x & y) << 1);
}
int main() {
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    //rev=rev-2; // differnce of 2 with the reverse value.
    //printf("Reversed number with differnce of 2= %d\n\n", rev);
    printf("Reversed number with differnce of 2= %d\n\n", magic(rev, 2));
    return 0;
}

