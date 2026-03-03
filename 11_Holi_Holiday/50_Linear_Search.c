// 50_Linear_Search.c

#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    int arr[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    printf("Name: Shubham Kumar\n");

    if (found)
        printf("Element Found\n");
    else
        printf("Element Not Found\n");

    printf("Name: Shubham Kumar\n");
    return 0;
}