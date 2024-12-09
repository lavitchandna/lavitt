#include <stdio.h>
#include <math.h>

// Function to convert Binary to Decimal
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

// Function to convert Decimal to Binary
long decimalToBinary(int decimal) {
    long binary = 0;
    int remainder, base = 1;

    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        base *= 10;
        decimal /= 2;
    }

    return binary;
}

int main() {
    int choice, number;

    printf("Choose an option:\n");
    printf("1. Binary to Decimal Conversion\n");
    printf("2. Decimal to Binary Conversion\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%d", &number);
            printf("The decimal equivalent is: %d\n", binaryToDecimal(number));
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &number);
            printf("The binary equivalent is: %ld\n", decimalToBinary(number));
            break;
        default:
            printf("Invalid choice! Please choose 1 or 2.\n");
    }

    return 0;
}
