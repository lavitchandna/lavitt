#include <stdio.h>

int main() {
    int rows, i, j;

    // Input number of rows
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &rows);

    // Generate the pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            // Determine whether to print 1 or 0 based on position
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
