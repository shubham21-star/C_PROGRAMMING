// 10_Leap_Year.c

#include <stdio.h>

int main() {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Name: Shubham Kumar\n");

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");

    printf("Name: Shubham Kumar\n");

    return 0;
}