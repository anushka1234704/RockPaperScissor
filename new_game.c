#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;

    srand(time(0));  // Seed random number

    printf("=== ROCK - PAPER - SCISSORS ===\n");
    printf("Choose:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &player);

    computer = rand() % 3 + 1;  // Computer chooses 1-3

    // Show choices
    printf("\nYou chose: %d\n", player);
    printf("Computer chose: %d\n\n", computer);

    // Game logic
    if (player == computer) {
        printf("It's a Draw!\n");
    }
    else if ((player == 1 && computer == 3) ||
             (player == 2 && computer == 1) ||
             (player == 3 && computer == 2)) {
        printf("?? You WIN!\n");
    }
    else {
        printf("?? You LOSE!\n");
    }

    return 0;
}
