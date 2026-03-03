// 25_Count_Even_and_Odd_Elements.c

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Name: Shubham Kumar\n");
    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);
    printf("Name: Shubham Kumar\n");

    return 0;
}