#include <stdio.h>

void leftRotate(int arr[], int size, int rotations) {
    for (int r = 0; r < rotations; r++) {
        int first = arr[0]; // Store first element
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1]; // Shift left
        }
        arr[size - 1] = first; // Move first element to end
    }
}

int main() {
    int arr[] = {};
    int size = sizeof(arr) / sizeof(arr[0]);
    int rotations;

    

    leftRotate(arr, size, rotations);

    printf("Array after left rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
