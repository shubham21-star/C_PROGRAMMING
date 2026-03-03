// 12_Print_Even_Numbers_Up_To_N.c

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Name: Shubham Kumar\n");

    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\nName: Shubham Kumar\n");

    return 0;
}