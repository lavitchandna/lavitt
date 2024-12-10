#include <stdio.h>

// Function prototypes
void display_board(char board[3][3]);
int check_winner(char board[3][3]);
int is_draw(char board[3][3]);

int main() {
    char board[3][3] = { {'1', '2', '3'},
                         {'4', '5', '6'},
                         {'7', '8', '9'} }; // Initial board setup
    int current_player = 1; // Player 1 starts
    int move, row, col;
    char symbol;
    int game_status = 0; // 0 = game continues, 1 = someone won, -1 = draw

    printf("Welcome to Tic Tac Toe!\n");
    printf("Player 1: X, Player 2: O\n\n");

    while (game_status == 0) {
        display_board(board);

        // Current player's turn
        symbol = (current_player == 1) ? 'X' : 'O';
        printf("Player %d (%c), enter your move (1-9): ", current_player, symbol);
        scanf("%d", &move);

        // Validate move
        if (move < 1 || move > 9) {
            printf("Invalid move. Please choose a number between 1 and 9.\n");
            continue;
        }

        row = (move - 1) / 3;
        col = (move - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Box already filled. Choose another move.\n");
            continue;
        }

        // Make the move
        board[row][col] = symbol;

        // Check for a winner
        if (check_winner(board)) {
            display_board(board);
            printf("Player %d (%c) wins!\n", current_player, symbol);
            return 0;
        }

        // Check for a draw
        if (is_draw(board)) {
            display_board(board);
            printf("It's a draw!\n");
            return 0;
        }

        // Switch to the next player
        current_player = (current_player == 1) ? 2 : 1;
    }

    return 0;
}

// Function to display the game board
void display_board(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        if (i < 2) printf("\n---|---|---\n");
    }
    printf("\n\n");
}

// Function to check for a winner
int check_winner(char board[3][3]) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;

    return 0; // No winner
}

// Function to check for a draw
int is_draw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return 0;
        }
    }
    return 1; // All boxes are filled
}
