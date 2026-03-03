// 37_Armstrong_Number.c

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, result = 0, digits = 0;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp = temp / 10;
    }

    printf("Name: Shubham Kumar\n");

    if (result == original)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    printf("Name: Shubham Kumar\n");

    return 0;
}