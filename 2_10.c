#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
void main() {
    int marks[] = {2, 3, 5, 10, 11, 14, 17}, size = 7, count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(marks[i])) count++;
    }
    printf("Total prime numbers: %d\n", count);
}
