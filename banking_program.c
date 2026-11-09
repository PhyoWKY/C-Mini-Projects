#include <stdio.h>

void check_balance(float balance);
float deposit();
float withdraw(float balance);

int main(){

    // BANKING PROGRAM

    int choice = 0;
    float balance = 0.0f;

    printf("*** WELOME TO THE BANK ***");

    do{
        printf("\nSelect an option: \n");
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                check_balance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;    
            case 4:
                printf("\nThank you for using the bank!\n");
            default:
                printf("\nInvalid choice! Please select 1 - 4\n"); 
                scanf("%*[^\n]%*c");          
        }

    }while(choice != 4);

    return 0;
}

void check_balance(float balance){
    printf("\nYour currnt balance is: $%.2f\n", balance);
}

float deposit(){

    float amount = 0.0f;

    printf("\nEnter amount to deposit: $");
    int valid_amount = scanf("%f", &amount);

    if(valid_amount != 1 || amount < 0){
        printf("Invalid amount or input!\n");
        scanf("%*[^\n]%*c");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }

}

float withdraw(float balance){

    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $");
    int valid_amount = scanf("%f", &amount);

    if(valid_amount != 1 || amount < 0){
        printf("Invalid amount or input!\n");
        scanf("%*[^\n]%*c");
        return 0.0f;
    }
    else if(amount > balance){
        printf("Insufficient finds! Your balance is $%.2f\n", balance);
        return 0.0f;
    }
    else{
        printf("Successfully withdraw $%.2f\n", amount);
        return amount;
    }

}
