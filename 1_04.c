#include <stdio.h>

// Method 1: Using a temporary variable
void swapWithTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Method 2: Using arithmetic operations (Addition and Subtraction)
void swapWithArithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Method 3: Using bitwise XOR
void swapWithBitwise(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// Method 4: Using pointers
void swapWithPointers(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Method 1: Using a temporary variable
    swapWithTemp(&num1, &num2);
    printf("After swapping (Using temporary variable): num1 = %d, num2 = %d\n", num1, num2);

    // Swap back for the next method
    swapWithTemp(&num1, &num2);

    // Method 2: Using arithmetic operations
    swapWithArithmetic(&num1, &num2);
    printf("After swapping (Using arithmetic operations): num1 = %d, num2 = %d\n", num1, num2);

    // Swap back for the next method
    swapWithArithmetic(&num1, &num2);

    // Method 3: Using bitwise XOR
    swapWithBitwise(&num1, &num2);
    printf("After swapping (Using bitwise XOR): num1 = %d, num2 = %d\n", num1, num2);

    // Swap back for the next method
    swapWithBitwise(&num1, &num2);

    // Method 4: Using pointers
    int *p1 = &num1, *p2 = &num2;
    swapWithPointers(&p1, &p2);
    printf("After swapping (Using pointers): num1 = %d, num2 = %d\n", *p1, *p2);

    return 0;
}
