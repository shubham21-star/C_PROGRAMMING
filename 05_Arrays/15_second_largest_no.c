#include <stdio.h>
int main(){
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("enter %d number:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int max=a[0];
    int secondmax=a[0];

    // largest no. & second largest no.
    for(int i=1; i<n; i++){
    
        if(a[i]>max){
            secondmax=max;
            max = a[i];
        }
        else if(a[i]>secondmax){
            secondmax=a[i];
        }
        
    }
    printf("Second Largest number= %d", secondmax);

    return 0;
}