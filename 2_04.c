#include <stdio.h>
void main() {
    int marks[] = {40, 99, 99, 75, 99}, size = 5, count = 0;
    printf("Indexes of 99: ");
    for (int i = 0; i < size; i++) {
        if (marks[i] == 99) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal students with 99: %d\n", count);
}
