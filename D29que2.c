// a Rock, Paper, Scissors game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    srand(time(0));

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Choices:\n1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);

    computerChoice = rand() % 3 + 1;

    printf("You chose: ");
    if (userChoice == 1) printf("Rock\n");
    else if (userChoice == 2) printf("Paper\n");
    else if (userChoice == 3) printf("Scissors\n");
    else {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("Computer chose: ");
    if (computerChoice == 1) printf("Rock\n");
    else if (computerChoice == 2) printf("Paper\n");
    else printf("Scissors\n");

    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
