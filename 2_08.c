#include <stdio.h>
void main() {
    int marks[] = {40, 55, 60, 75, 80}, size = 5, max = marks[0], min = marks[0];
    for (int i = 1; i < size; i++) {
        if (marks[i] > max) max = marks[i];
        if (marks[i] < min) min = marks[i];
    }
    printf("Max: %d, Min: %d\n", max, min);
}
