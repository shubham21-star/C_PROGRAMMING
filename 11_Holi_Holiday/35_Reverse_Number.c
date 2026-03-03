// 35_Reverse_Number.c

#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("Name: Shubham Kumar\n");
    printf("Reversed Number: %d\n", reverse);
    printf("Name: Shubham Kumar\n");

    return 0;
}