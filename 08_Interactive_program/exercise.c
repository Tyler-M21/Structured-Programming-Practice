#include <stdio.h>
#include <stdlib.h>

int main()
{
     float balance = 10000, amount;
    int choice;

    do {
        printf("\n--- Wallet Menu ---\n");
        printf("1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Choose: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }
        switch (choice) {
        case 1:
            printf("Balance: %.2f\n", balance);
            break;
        case 2:
            printf("Amount to deposit: ");
            scanf("%lf", &amount);
            if (amount > 0) { balance += amount; printf("Deposited.\n"); }
            else printf("Amount must be positive.\n");
            break;
        case 3:
            printf("Amount to withdraw: ");
            scanf("%lf", &amount);
            if (amount <= 0) printf("Amount must be positive.\n");
            else if (amount > balance) printf("Insufficient funds.\n");
            else { balance -= amount; printf("Withdrawn.\n"); }
            break;
        case 4:
            printf("Goodbye!\n");
            break;
        default:
            printf("Please choose 1-4.\n");
        }
    } while (choice != 4);
    return 0;
}
