#include <stdio.h>
int main() {
    // /electric bill calculation
    int units,bill;
    printf("\nEnter the number of units consumed: ");
    scanf("%d", &units);
    if(units >200)
    {
        printf("Your Electric bill is: %d\n", units*8);
    }
    else if(units<200 && units>100)
    {
        printf("Your Electric bill is: %d\n", units*10);
    }
    else if(units<=100)
    {
        printf("Your Electric bill is: %d\n", units);
    }
    return 0;
}

