#include <stdio.h>
int main() {
    char name[50];   
    int age, mobile, accountNumber, balance;

    char op; 

    printf("\n=====STSS BANKING SYSTEM=====\n");
    printf("\n 1.Register your Account\n ");
    printf("2.Already have an Account\n ");
    printf("Enter your choice: ");
    scanf(" %c", &op);

    switch (op) {
        case '1':
            printf("\nEnter Name :  ");
            scanf("%s", name);

            printf("\nEnter Age :  ");
            scanf("%d", &age);

            printf("\nEnter Mobile Number :  ");
            scanf("%d", &mobile);

            printf("\nEnter Account Number :  ");
            scanf("%d", &accountNumber);

            printf("\nAccount created successfully!\n");
            printf("\ninitial details are: rs.00\n");

            printf("\nEnter your First Deposit");
            printf("\ninitial balance: rs.");
            scanf("%d", &balance);

            char op1;
            printf("1.Deposit Amount\n2.Withdraw Amount\n3.Check Balance");
            scanf(" %c", &op1);

            switch (op1) {

                case '1': {
                    int depAmount;
                    printf("\n\nEnter amount to be deposit: ");
                    scanf("%d", &depAmount);
                    balance = balance + depAmount;
                    printf("\nAmount deposited successfully!\n");
                }
                break;

                case '2': {
                    int withdrawAmount;
                    printf("\nEnter amount to withdraw: ");
                    scanf("%d", &withdrawAmount);
                    printf("\nAmount withdraw successfully!\n");
                }
                break;

                case '3': {
                    int withdrawAmount = 0;
                    int nbalance = balance - withdrawAmount;
                    printf("\n\nRemaining Balance in Account: Rs.%d\n", nbalance);
                }
                break;

                default:
                    printf("Invalid operator!.\n");
            }
        break;

        case '2':
            printf("\nEnter Name :  ");
            scanf("%s", name);

            printf("\nEnter Account Number :  ");
            scanf("%d", &accountNumber);

            printf("\nLogin successfully!\n");
            printf("\ninitial details are: 10,985,500 Rs.\n");

            balance = 10985500;

            char op1b;
            printf("1.Deposit Amount\n2.Withdraw Amount\n3.Check Balance");
            scanf(" %c", &op1b);

            switch (op1b) {

                case '1': {
                    int depAmount;
                    printf("\n\nEnter amount to be deposit: ");
                    scanf("%d", &depAmount);
                    balance = balance + depAmount;
                    printf("\nAmount deposited successfully!\n");
                }
                break;

                case '2': {
                    int withdrawAmount;
                    printf("\nEnter amount to withdraw: ");
                    scanf("%d", &withdrawAmount);
                    printf("\nAmount withdraw successfully!\n");
                }
                break;

                case '3': {
                    int withdrawAmount = 0; 
                    int nbalance = balance - withdrawAmount;
                    printf("\n\nRemaining Balance in Account: Rs.%d\n", nbalance);
                }
                break;

                default:
                    printf("Invalid operator!.\n");
            }
        break;

        default:
            printf("Invalid operator!.\n");
    }

    return 0;
}
