#include <stdio.h>
void main() {
    int arr[100] = {1, 2, 3, 4, 5}, size = 5, pos, elem;
    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &elem);

    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    size++;

    printf("Updated array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}
