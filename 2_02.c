#include <stdio.h>
void main() {
    int marks[] = {40, 55, 60, 75, 80}, size = 5;
    for (int i = 0; i < size; i++) {
        if (marks[i] >= 75) printf("%d -> A Grade\n", marks[i]);
        else if (marks[i] >= 60) printf("%d -> B Grade\n", marks[i]);
        else if (marks[i] >= 40) printf("%d -> C Grade\n", marks[i]);
        else printf("%d -> D Grade\n", marks[i]);
    }
}
