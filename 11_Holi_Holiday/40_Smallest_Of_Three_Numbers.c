// 40_Smallest_Of_Three_Numbers.c

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Name: Shubham Kumar\n");

    if (a <= b && a <= c)
        printf("Smallest number is: %d\n", a);
    else if (b <= a && b <= c)
        printf("Smallest number is: %d\n", b);
    else
        printf("Smallest number is: %d\n", c);

    printf("Name: Shubham Kumar\n");

    return 0;
}