#include <stdio.h>
int main() {
    char name[50]; int age; int mobile[10];   
    int accountNumber; int balance;

    // Input details
    printf("\nEnter Name : ");
    scanf("%s", name);   

    printf("\nEnter Age : ");
    scanf("%d", &age);

    printf("\nEnter Mobile Number : ");
    scanf("%d", &mobile);   

    printf("\nEnter Account Number : ");
    scanf("%d", &accountNumber);

    printf("\nAccount created successfully!");
    printf("\ninitial details are: rs.0000\n");

    printf("\nEnter your initial balance: rs.");
    scanf("%d", &balance);

    // Perform deposit
    int depAmount;
    printf("\nEnter amount to be deposit: ");
    scanf("%d", &depAmount);
    balance = balance + depAmount;
    printf("\nAmount deposited successfully!;");
    // Show remaining balance
    printf("\nRemaining Balance in Account: Rs.%d\n", balance);

    // Perform withdraw
    int withdrawAmount;
    printf("\nEnter amount to withdraw: ");
    scanf("%d", &withdrawAmount);
    balance = balance - withdrawAmount;   
    printf("\nAmount withdraw successfully!;");

    // Show remaining balance
    printf("\nRemaining Balance in Account: Rs.%d\n", balance);

    return 0;
}
