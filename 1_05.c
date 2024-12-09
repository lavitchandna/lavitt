#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Find the divisors and calculate their sum
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add divisor to the sum
        }
    }

    // Check if the sum of divisors equals the number
    if (sum == num && num > 0) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }

    return 0;
}
