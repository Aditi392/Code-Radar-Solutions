#include <stdio.h>

// Function to check if array is sorted
int isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}

int main() {
    int size;

    // Get array size from user
    printf("");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if array is sorted
    if (isSorted(arr, size)) {
        printf("Sorted\n");
    } else {
        printf("NOT Sorted\n");
    }

    return 0;
}
