// 19_Palindrome_Number.c

#include <stdio.h>

int main() {
    int n, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp != 0) {
        reverse = reverse * 10 + (temp % 10);
        temp = temp / 10;
    }

    printf("Name: Shubham Kumar\n");

    if (reverse == n)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    printf("Name: Shubham Kumar\n");

    return 0;
}