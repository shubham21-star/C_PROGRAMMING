// 31_Prime_Number.c

#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        flag = 1;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    printf("Name: Shubham Kumar\n");

    if (flag == 0)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    printf("Name: Shubham Kumar\n");

    return 0;
}