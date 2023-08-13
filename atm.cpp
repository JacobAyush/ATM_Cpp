#include<stdio.h>

int main()
{
    int balance=1000000, withdraw, deposit;
    int pin = 1234, option, count = 0;
    printf("Welcome to the ATM Machine\n");
    printf("Please enter your 4-digit PIN: ");
    scanf("%d", &pin);
    while(pin != 1234 && count < 2) {
        printf("Invalid PIN. Please enter your 4-digit PIN: ");
        scanf("%d", &pin);
        count++;
    }
    if(count == 2 && pin != 1234) {
        printf("Maximum attempts reached. Your card is blocked.\n");
        return 0;
    }
    printf("Please select an option: \n");
    printf("1. Balance Enquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");
    printf("Option: ");
    scanf("%d", &option);
    switch(option) {
        case 1:
            printf("Your balance is %d\n", balance);
            break;
        case 2:
            printf("Enter the amount you want to withdraw: ");
            scanf("%d", &withdraw);
            if(withdraw > balance) {
                printf("Insufficient balance. Please try again.\n");
            } else {
                balance -= withdraw;
                printf("Please collect your cash\n");
                printf("Your balance is now %d\n", balance);
            }
            break;
        case 3:
            printf("Enter the amount you want to deposit: ");
            scanf("%d", &deposit);
            balance += deposit;
            printf("Your balance is now %d\n", balance);
            break;
        case 4:
            printf("Thank you for using the ATM Machine\n");
            return 0;
        default:
            printf("Invalid option. Please try again.\n");
            break;
    }
    return 0;
}
