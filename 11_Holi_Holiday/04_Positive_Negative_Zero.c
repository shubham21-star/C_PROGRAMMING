// 04_Positive_Negative_Zero.c

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Name: Shubham Kumar\n");

    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    printf("Name: Shubham Kumar\n");

    return 0;
}
