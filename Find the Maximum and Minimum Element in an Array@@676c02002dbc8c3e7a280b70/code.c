#include <stdio.h>

// Function to find the maximum and minimum in an array
void findMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];  // Assume first element is the minimum
    *max = arr[0];  // Assume first element is the maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];  // Update minimum
        }
        if (arr[i] > *max) {
            *max = arr[i];  // Update maximum
        }
    }
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

    int min, max;
    findMinMax(arr, size, &min, &max);

    // Print the results
    printf("%d\n", min);
    printf("%d\n", max);

    return 0;
}
