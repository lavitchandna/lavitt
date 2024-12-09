#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Function to calculate binomial coefficient
int binomialCoeff(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int rows, i, j, space;

    // Input the number of rows
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Generate Pascal's Triangle
    for (i = 0; i < rows; i++) {
        // Print spaces for alignment
        for (space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }

        // Print numbers in the row
        for (j = 0; j <= i; j++) {
            printf("%d ", binomialCoeff(i, j));
        }

        printf("\n"); // Move to the next row
    }

    return 0;
}
