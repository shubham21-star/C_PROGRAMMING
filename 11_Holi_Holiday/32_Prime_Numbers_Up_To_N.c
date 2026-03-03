// 32_Prime_Numbers_Up_To_N.c

#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Name: Shubham Kumar\n");
    printf("Prime numbers up to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    printf("\nName: Shubham Kumar\n");

    return 0;
}