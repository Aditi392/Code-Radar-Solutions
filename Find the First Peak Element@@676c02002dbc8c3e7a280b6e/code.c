#include <stdio.h>

// Function to find the first peak element
int findFirstPeak(int arr[], int size) {
    if (size == 1) return arr[0];  // If only one element, it's the peak
    
    // Check first element
    if (arr[0] > arr[1]) {
        return arr[0];
    }

    // Check middle elements
    for (int i = 1; i < size - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i]; // Return first peak
        }
    }

    // Check last element
    if (arr[size - 1] > arr[size - 2]) {
        return arr[size - 1];
    }

    return -1; // No peak found
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

    // Find and print the first peak element
    int peak = findFirstPeak(arr, size);
    if (peak != -1) {
        printf("%d\n", peak);
    } else {
        printf("\n");
    }

    return 0;
}
