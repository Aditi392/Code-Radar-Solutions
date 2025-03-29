#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int found = 0; // Flag to check if duplicates exist

    printf("");
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break; // Stop checking further duplicates of the same number
            }
        }
    }

    if (!found) {
        printf(" ");
    }
    printf("\n");
}

int main() {
    int size;

    // Get array size from user
    printf(" ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf(" ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to find duplicates
    findDuplicates(arr, size);

    return 0;
}
