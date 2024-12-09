#include <stdio.h>
void main() {
    int marks[] = {40, 55, 60, 75, 80}, size = 5;
    for (int i = 0; i < size; i++) {
        if (marks[i] % 2 == 0) printf("%d is Even\n", marks[i]);
        else printf("%d is Odd\n", marks[i]);
    }
}
