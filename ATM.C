#include <stdio.h>

int main()
{
    int balance = 1000;
    int pin = 1234;
    int option, amount, new_pin;

    printf("Welcome to the ATM machine.\n");

    // Loop until user chooses to exit
    while (1)
    {
        printf("Please enter your PIN: ");
        scanf("%d", &pin);

        if (pin != 1234)
        {
            printf("Invalid PIN. Please try again.\n");
            continue;
        }

        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");
        printf("Please select an option: ");
        scanf("%d", &option);

        switch (option)
        {
            case 1: // Check balance
                printf("Your balance is $%d.\n", balance);
                break;

            case 2: // Deposit money
                printf("Enter amount to deposit: $");
                scanf("%d", &amount);
                balance += amount;
                printf("Your new balance is $%d.\n", balance);
                break;

            case 3: // Withdraw money
                printf("Enter amount to withdraw: $");
                scanf("%d", &amount);

                if (amount > balance)
                {
                    printf("Insufficient funds.\n");
                    break;
                }

                balance -= amount;
                printf("Your new balance is $%d.\n", balance);
                break;

            case 4: // Change PIN
                printf("Enter new PIN: ");
                scanf("%d", &new_pin);
                pin = new_pin;
                printf("PIN changed successfully.\n");
                break;

            case 5: // Exit
                printf("Thank you for using the ATM machine.\n");
                return 0;

            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}
