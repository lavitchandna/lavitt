#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        // Calculate the borrow
        int borrow = (~a) & b;

        // Perform subtraction without borrow
        a = a ^ b;

        // Shift the borrow to the left by 1
        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1, num2, result;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate subtraction
    result = subtract(num1, num2);

    // Output the result
    printf("The result of %d - %d is: %d\n", num1, num2, result);

    return 0;
}
