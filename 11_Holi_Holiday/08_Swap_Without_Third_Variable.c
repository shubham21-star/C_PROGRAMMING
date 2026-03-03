// 08_Swap_Without_Third_Variable.c

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Name: Shubham Kumar\n");
    printf("After swap: %d %d\n", a, b);
    printf("Name: Shubham Kumar\n");

    return 0;
}