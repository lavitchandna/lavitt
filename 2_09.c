#include <stdio.h>
void main() {
    int arr[] = {10, 20, 15, 2, 23, 90, 67}, size = 7;
    for (int i = 0; i < size; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && 
            (i == size - 1 || arr[i] >= arr[i + 1])) {
            printf("Peak element: %d\n", arr[i]);
            break;
        }
    }
}
