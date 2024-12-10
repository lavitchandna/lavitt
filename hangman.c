#include <stdio.h>
#include <string.h>

#define MAX_TRIES 3 // Maximum number of incorrect guesses allowed

void display_word(const char* word, const int* guessed, int length) {
    for (int i = 0; i < length; i++) {
        if (guessed[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int is_word_guessed(const int* guessed, int length) {
    for (int i = 0; i < length; i++) {
        if (!guessed[i]) {
            return 0; // Not fully guessed yet
        }
    }
    return 1; // Fully guessed
}

int main() {
    const char word[] = "PROGRAM"; // Word to guess
    int length = strlen(word);
    int guessed[length];
    int tries = 0;

    // Initialize guessed array
    for (int i = 0; i < length; i++) {
        guessed[i] = 0;
    }

    printf("Welcome to the Hangman Game!\n");
    printf("You have %d tries to guess the word.\n", MAX_TRIES);
    printf("Let's begin!\n\n");

    while (tries < MAX_TRIES) {
        printf("Word: ");
        display_word(word, guessed, length);

        char guess;
        printf("Enter your guess (a single letter): ");
        scanf(" %c", &guess);

        // Check if the guess is correct
        int correct_guess = 0;
        for (int i = 0; i < length; i++) {
            if (word[i] == guess || word[i] == (guess - 32) || word[i] == (guess + 32)) { // To handle case sensitivity
                guessed[i] = 1;
                correct_guess = 1;
            }
        }

        if (correct_guess) {
            printf("Correct guess!\n");
        } else {
            printf("Wrong guess!\n");
            tries++;
        }

        // Check if the word is fully guessed
        if (is_word_guessed(guessed, length)) {
            printf("\nCongratulations! You've guessed the word: %s\n", word);
            printf("The man survives!\n");
            return 0;
        }
    }

    // If out of tries
    printf("\nYou've used all your tries. The word was: %s\n", word);
    printf("The man gets hanged. Better luck next time!\n");

    return 0;
}
