#include <stdio.h>
void main() {
    int marks[] = {40, 55, 60, 75, 80}, size = 5, sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    printf("Average score: %.2f\n", (float)sum / size);
}
