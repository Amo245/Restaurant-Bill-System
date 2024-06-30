#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printMenu();

int main() {
    int option, sum = 0;  
    bool flag = true;
    char orderChoice;  

    while (flag) {
        printMenu(); 

        printf("Choose your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("You chose the Burger! It will be on your tab.\n");
                sum += 90;
                break;
            case 2:
                printf("You chose the Salad! It will be on your tab.\n");
                sum += 40;
                break;
            case 3:
                printf("You chose Niko's Special! It will be on your tab.\n");
                sum += 120;
                break;
            default:
                printf("Please choose a valid option.\n");
                continue; 
        }

        printf("Do you want to keep ordering? (Y or N): ");
        scanf(" %c", &orderChoice);

        if (orderChoice == 'Y' || orderChoice == 'y') {
            flag = true;
        } else if (orderChoice == 'N' || orderChoice == 'n') {
            flag = false;
        } else {
            printf("Please enter a valid response. Now going back to Menu.\n");
        }
    }

    printf("Your total is: %d\n", sum);
    return 0;
}

void printMenu() {
    printf("Welcome to El Boqutei Yousel Montreal Fine Dining\n");
    printf("Menu\n");
    printf("1. Burger - 90$\n");
    printf("2. Salad - 40$\n");
    printf("3. Niko's Special - 120$\n");
}
