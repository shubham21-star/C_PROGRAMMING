#include  <stdio.h>
int main()  {
    int a[5];
    printf("Enter the value in array:\n");
    for(int i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    printf("Display the output only Nagetive value:\n");
    for(int i=0;i<5;i++)
    if(a[i]<0)
    {
        printf("%d", a[i]);
    }
}