#include <stdio.h>

int main() {
    /*Login info*/
    double username;
    double password;
    

    printf("welcome toooooooo focus bank\n");

    printf("enter your 4 digit pin: ");
    scanf("%d", &username);
    printf("enter your 4 digit pin again: ");
    scanf("%d", &password);
    
    if (username = password)
    {
    printf("\nLogin successful!\n");
        
        
        int menu;
        float balance = 400000.00;
        printf("Quick Menu:\n");
        printf("1. Display balance\n");
        printf("2. Withdraw money\n");
        printf("3. Deposit money\n");
        printf("4. Transfer money\n");
        printf("5. Exit\n");
        printf("Please choice a menu to proceed: ");
        scanf("%d", &menu);
        
    
        switch (menu) {
            case 1:
                printf("Your available balance is: %.2f\n", balance);
                break;
            case 2:
                float amount;
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("sorry kindly top up your balance!\n");
                } else {
                    balance -= amount;
                    printf("You have succesfully withdrawn: %.2f\n", amount);
                    printf("Dear user your New balance is: %.2f\n", balance);
                }
                break;
            case 3:
                float depositAmount;
                printf("Enter amount to deposit: ");
                scanf("%f", &depositAmount);
                balance += depositAmount;
                printf("You have succesfully deposited: %.2f\n", depositAmount);
                printf("Dear user your New balance is: %.2f\n", balance);
                break;
            case 4:
                float transferAmount;
                printf("Enter amount to transfer: ");
                scanf("%f", &transferAmount);
                balance -= transferAmount;
                printf("You have succesfully transfered: %.2f\n", transferAmount);
                printf("Dear user your New balance is: %.2f\n", balance);
                break;
            case 5:
                printf("Have a nice day\n");
                break;
            default:
                printf("You made a mistaske!\n");
                break;
        }
}
    else {
        printf("life is unpredictable\n");
    }


    printf("Thank you for banking with us!");
    return 0;
}
