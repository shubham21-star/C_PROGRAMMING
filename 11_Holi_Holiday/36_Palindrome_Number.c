// 36_Palindrome_Number.c

#include <stdio.h>

int main() {
    int n, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("Name: Shubham Kumar\n");

    if (original == reverse)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    printf("Name: Shubham Kumar\n");

    return 0;
}