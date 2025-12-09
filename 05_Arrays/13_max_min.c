#include  <stdio.h>
int main()  {
    int a[5];
    int max=a[0];
    int min=a[0];
    printf("Enter the value in array:\n");
    for(int i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    printf("Printing the Maximum & Minimum:\n");
    for(int i=0;i<5;i++)
    if(a[i]<0)
    {
        printf("%d", a[i]);
    }
}