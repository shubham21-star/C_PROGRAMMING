// 24_Smallest_Element_in_Array.c

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Name: Shubham Kumar\n");
    printf("Smallest element = %d\n", min);
    printf("Name: Shubham Kumar\n");

    return 0;
}