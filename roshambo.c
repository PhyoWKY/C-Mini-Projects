#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_computer_choice();
int get_user_choice();
void check_winner(int user_choice, int computer_choice);

int main(){

    // ROCK PAPER SCISSORS

    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS ***\n");

    int user_choice = get_user_choice();
    int computer_choice = get_computer_choice();

    switch(user_choice){
        case 1:
        printf("You chose ROCK!\n");
        break;
        case 2:
        printf("You chose PAPER!\n");
        break;case 3:
        printf("You chose SCISSORS!\n");
        break;
    }

    switch(computer_choice){
        case 1:
        printf("Computer chose ROCK!\n");
        break;
        case 2:
        printf("Computer chose PAPER!\n");
        break;case 3:
        printf("Computer chose SCISSORS!\n");
        break;
    }

    check_winner(user_choice, computer_choice);

    return 0;
}

int get_computer_choice(){
    return (rand() % 3) + 1;
}

int get_user_choice(){

    int choice = 0;

    do{
        printf("Choose an option:\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    }while(choice < 1 || choice > 3);

    return choice;
}

void check_winner(int user_choice, int computer_choice){

    if(user_choice == computer_choice){
        printf("It's a TIE!");
    }
    else if((user_choice == 1 && computer_choice == 3) ||
            (user_choice == 2 && computer_choice == 1) ||
            (user_choice == 3 && computer_choice == 2)){
        printf("You WIN!");
    }
    else{
        printf("You LOSE!");
    }
     
}