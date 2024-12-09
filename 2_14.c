#include <stdio.h>
void main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2}, size = 10;
    int freq[100000] = {0};

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    printf("Duplicates: ");
    for (int i = 0; i < 100000; i++) {
        if (freq[i] > 1) printf("%d ", i);
    }
    printf("\n");
}