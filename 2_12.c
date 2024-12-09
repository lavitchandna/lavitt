#include <stdio.h>
void main() {
    int arr[100] = {1, 2, 3, 4, 5}, size = 5, pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("Updated array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}
