#include <stdio.h>

void findFrequency(int arr[], int size) {
    int visited[size]; // Array to mark visited elements

    // Initialize visited array with 0 (unvisited)
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    printf("\n");

    // Loop through each element
    for (int i = 0; i < size; i++) {
        if (visited[i] == 1) { // If already counted, skip
            continue;
        }

        int count = 1; // Count occurrences

        // Check for duplicates
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as visited
            }
        }

        // Print element and its frequency
        printf("%d\t   %d\n", arr[i], count);
    }
}

int main() {
    int size;

    // Get array size
    printf("");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to find frequency
    findFrequency(arr, size);

    return 0;
}
