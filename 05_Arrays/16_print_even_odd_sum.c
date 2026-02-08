#include <stdio.h>

int main() {

    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int a[n], even[n], odd[n];
    int sumEven = 0, sumOdd = 0;

    // Taking input
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    //  even and odd + calculating sums
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            even[i] = a[i];
            sumEven += a[i];
        } 
        else {
            odd[i] = a[i];
            sumOdd += a[i];
        }
    }

    // Print even numbers
    printf("\nEven numbers: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", even[i]);
    }

    // Printodd numbers
    printf("\nOdd numbers: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", odd[i]);
    }

    // Print sums
    printf("\nSum of Even = %d", sumEven);
    printf("\nSum of Odd = %d", sumOdd);

    return 0;
}
