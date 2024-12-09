#include <stdio.h>
#include <math.h>  // For logarithmic and square root functions

int main() {
    int choice;
    double num1, num2, result;

    // Displaying menu options
    printf("Simple Calculator in C\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithmic values (log base 10)\n");
    printf("6. Square root\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    // Switch case for operation selection
    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0) {
                printf("Error! Division by zero.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 <= 0) {
                printf("Error! Logarithm is undefined for non-positive numbers.\n");
            } else {
                result = log10(num1);  // log base 10
                printf("Logarithm of %.2lf is: %.2lf\n", num1, result);
            }
            break;
        
        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("Error! Square root of negative number is undefined.\n");
            } else {
                result = sqrt(num1);  // Square root
                printf("Square root of %.2lf is: %.2lf\n", num1, result);
            }
            break;

        default:
            printf("Invalid choice! Please choose a valid option (1-6).\n");
    }

    return 0;
}
