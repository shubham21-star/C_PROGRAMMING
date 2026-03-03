// 45_Count_Digits.c

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        count++;
        n /= 10;
    }

    printf("Name: Shubham Kumar\n");
    printf("Digits count: %d\n", count);
    printf("Name: Shubham Kumar\n");

    return 0;
}