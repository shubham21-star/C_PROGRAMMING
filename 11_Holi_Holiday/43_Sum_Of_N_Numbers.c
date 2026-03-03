// 43_Sum_Of_N_Numbers.c

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum += i;

    printf("Name: Shubham Kumar\n");
    printf("Sum = %d\n", sum);
    printf("Name: Shubham Kumar\n");

    return 0;
}