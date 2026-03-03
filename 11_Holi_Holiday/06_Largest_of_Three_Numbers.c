// 06_Largest_of_Three_Numbers.c

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Name: Shubham Kumar\n");

    if (a >= b && a >= c)
        printf("Largest = %d\n", a);
    else if (b >= c)
        printf("Largest = %d\n", b);
    else
        printf("Largest = %d\n", c);

    printf("Name: Shubham Kumar\n");

    return 0;
}