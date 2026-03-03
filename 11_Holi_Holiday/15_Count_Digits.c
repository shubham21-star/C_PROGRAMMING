// 15_Count_Digits.c

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    printf("Name: Shubham Kumar\n");
    printf("Digits = %d\n", count);
    printf("Name: Shubham Kumar\n");

    return 0;
}