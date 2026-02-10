#include <stdio.h>
int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols];
    int b[rows][cols];
    int sum = 0;

    printf("\nEnter elements of a :\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a [i][j]);
             
        }
    }

       printf("\nEnter elements of b :\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", & b[i][j]);
            
        }
    }

    
    printf("\nYour 2D Array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }


    return 0;
}