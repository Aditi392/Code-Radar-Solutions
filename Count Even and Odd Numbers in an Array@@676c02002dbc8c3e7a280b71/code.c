#include <stdio.h>

void countEvenOdd(int arr[], int size) {
    int evenCount = 0, oddCount = 0;

    // Loop through the array and count even and odd numbers
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Print the results
    printf("%d\n", evenCount);
    printf("%d\n", oddCount);
}

int main() {
    int size;

    // Get array size from user
    printf("");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf(" ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to count even and odd numbers
    countEvenOdd(arr, size);

    return 0;
}
