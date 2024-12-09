#include <stdio.h>
void main() {
    int marks[] = {40, 55, 60, 75, 80}, size = 5;
    for (int i = 0; i < size; i++) {
        marks[i] += 5;
    }
    printf("Updated marks: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");
}
