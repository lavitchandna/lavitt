#include <stdio.h>
void main() {
    int marks[] = {40, 55, 99, 75, 99}, size = 5, found = 0;
    for (int i = 0; i < size; i++) {
        if (marks[i] == 99) {
            printf("First 99 is at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) printf("No 99 found\n");
}
