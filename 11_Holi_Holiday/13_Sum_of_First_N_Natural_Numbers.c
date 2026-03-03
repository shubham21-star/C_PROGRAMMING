// 13_Sum_of_First_N_Natural_Numbers.c

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Name: Shubham Kumar\n");
    printf("Sum = %d\n", sum);
    printf("Name: Shubham Kumar\n");

    return 0;
}