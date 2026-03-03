// 11_Print_1_to_N.c

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Name: Shubham Kumar\n");

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\nName: Shubham Kumar\n");

    return 0;
}