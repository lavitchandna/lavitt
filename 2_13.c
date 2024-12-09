#include <stdio.h>
void main() {
    int arr[] = {1, 2, 3, 4, 5}, size = 5, last = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    printf("Rotated array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}
