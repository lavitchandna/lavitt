#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the computer's choice
const char* get_computer_choice() {
    int random_number = rand() % 101; // Random number between 0 and 100
    if (random_number <= 33) {
        return "Rock";
    } else if (random_number <= 66) {
        return "Paper";
    } else {
        return "Scissors";
    }
}

// Function to determine the winner
const char* determine_winner(const char* user_choice, const char* computer_choice) {
    if (user_choice == computer_choice) {
        return "It's a tie!";
    } else if ((user_choice == "Rock" && computer_choice == "Scissors") ||
               (user_choice == "Scissors" && computer_choice == "Paper") ||
               (user_choice == "Paper" && computer_choice == "Rock")) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    char user_choice[10];
    const char* computer_choice;

    // Seed the random number generator
    srand(time(0));

    // Prompt the user for their choice
    printf("Enter your choice (Rock, Paper, or Scissors): ");
    scanf("%s", user_choice);

    // Get the computer's choice
    computer_choice = get_computer_choice();

    // Display the choices
    printf("You chose: %s\n", user_choice);
    printf("Computer chose: %s\n", computer_choice);

    // Determine and display the winner
    const char* result = determine_winner(user_choice, computer_choice);
    printf("%s\n", result);

    return 0;
}
