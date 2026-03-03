// 38_Sum_Of_Digits.c

#include <stdio.h>

int main() {
    int n, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    printf("Name: Shubham Kumar\n");
    printf("Sum of digits: %d\n", sum);
    printf("Name: Shubham Kumar\n");

    return 0;
}