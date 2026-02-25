#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User {
    char acct_no[20];
    char pin[10];
    float balance;
};

int main() {
    struct User bank_user = {"2026001", "1234", 1000.00};
    char input_acct[20], input_pin[10];
    int choice;
    float amount;

    printf("Online Banking Login\nAccount Number: ");
    scanf("%s", input_acct);
    printf("PIN: ");
    scanf("%s", input_pin);

    if (strcmp(input_acct, bank_user.acct_no) == 0 && strcmp(input_pin, bank_user.pin) == 0) {
        while (1) {
            printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Logout\nChoice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Current Balance: $%.2f\n", bank_user.balance);
                    break;
                case 2:
                    printf("Enter Deposit Amount: ");
                    scanf("%f", &amount);
                    bank_user.balance += amount;
                    printf("New Balance: $%.2f\n", bank_user.balance);
                    break;
                case 3:
                    printf("Enter Withdrawal Amount: ");
                    scanf("%f", &amount);
                    if (amount > bank_user.balance) {
                        printf("Insufficient funds.\n");
                    } else {
                        bank_user.balance -= amount;
                        printf("Remaining Balance: $%.2f\n", bank_user.balance);
                    }
                    break;
                case 4:
                    exit(0);
                default:
                    printf("Invalid option.\n");
            }
        }
    } else {
        printf("Login Failed.\n");
    }

    return 0;
}
