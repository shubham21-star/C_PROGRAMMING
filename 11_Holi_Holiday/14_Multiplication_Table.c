// 14_Multiplication_Table.c

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Name: Shubham Kumar\n");

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    printf("Name: Shubham Kumar\n");

    return 0;
}