// 18_Factorial_of_Number.c

#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Name: Shubham Kumar\n");
    printf("Factorial = %d\n", fact);
    printf("Name: Shubham Kumar\n");

    return 0;
}
