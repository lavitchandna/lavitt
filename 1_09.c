#include <stdio.h>

int main() {
    int rows, i, j;

    // Input the number of rows for the pyramid
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Generate the pyramid pattern
    for (i = 1; i <= rows; i++) {
        // Print the first half
        for (j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }

        // Print a space between the two halves
        printf(" ");

        // Print the second half (same as the first half)
        for (j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }

        // Move to the next row
        printf("\n");
    }

    return 0;
}
