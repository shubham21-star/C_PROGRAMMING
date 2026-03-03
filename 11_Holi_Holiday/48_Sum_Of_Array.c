// 48_Sum_Of_Array.c

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("Name: Shubham Kumar\n");
    printf("Sum = %d\n", sum);
    printf("Name: Shubham Kumar\n");

    return 0;
}