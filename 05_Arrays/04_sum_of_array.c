#include<stdio.h>
int main ()
{
    int a[5],b[5],sum[5];
    printf("Enter the value of first array:\n");
    for (int i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }

    printf("Enter the value of second array:\n");
    for (int i=0;i<5;i++)
    {
    scanf("%d",&b[i]);
    }
    
    for (int i=0;i<5;i++)
    {
     sum[i]=a[i]+b[i];
    printf("sum of arrays %d + %d = %d\n",a[i],b[i],sum[i]);
    }

}