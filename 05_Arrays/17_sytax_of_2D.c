#include <stdio.h>

int main() {
    int a[10][10], row, column;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &column);

    // Input elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Display the matrix
    printf("\nMATRIX:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
