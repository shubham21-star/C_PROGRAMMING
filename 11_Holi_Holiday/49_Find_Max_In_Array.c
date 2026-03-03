// 49_Find_Max_In_Array.c

#include <stdio.h>

int main() {
    int n, i, max;
    int arr[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("Name: Shubham Kumar\n");
    printf("Maximum = %d\n", max);
    printf("Name: Shubham Kumar\n");

    return 0;
}