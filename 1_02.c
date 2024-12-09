#include <stdio.h>

int main() {
    int num1, num2, temp, hcf;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure num1 > num2 for the algorithm
    if (num2 > num1) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Use the Euclidean algorithm to calculate HCF
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    hcf = num1;

    // Print the HCF
    printf("The HCF of the given numbers is: %d\n", hcf);

    return 0;
}
