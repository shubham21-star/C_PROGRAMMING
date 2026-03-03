// 16_Reverse_Number.c

#include <stdio.h>

int main() {
    int n, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp != 0) {
        reverse = reverse * 10 + (temp % 10);
        temp = temp / 10;
    }

    printf("Name: Shubham Kumar\n");
    printf("Reversed Number = %d\n", reverse);
    printf("Name: Shubham Kumar\n");

    return 0;
}