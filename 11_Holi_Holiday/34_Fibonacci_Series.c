// 34_Fibonacci_Series.c

#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Name: Shubham Kumar\n");
    printf("Fibonacci Series:\n");

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\nName: Shubham Kumar\n");

    return 0;
}