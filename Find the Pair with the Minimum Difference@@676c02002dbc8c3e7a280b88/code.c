#include <stdio.h>
#include <stdlib.h>

void findMinDifference(int arr[], int size) {
    if (size < 2) {
        printf("\n");
        return;
    }

    int minDiff = abs(arr[1] - arr[0]);
    int num1 = arr[0], num2 = arr[1];

    // Compare every pair in the array
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int diff = abs(arr[j] - arr[i]);
            if (diff < minDiff) {
                minDiff = diff;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    printf("%d %d\n", num2, num1);

}

int main() {
    int size;

    // Get array size from user
    printf(" ");
    scanf("%d", &size);

    if (size < 2) {
        printf("\n");
        return 1;
    }

    int arr[size];

    // Input array elements from user
    printf("");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to find the minimum difference
    findMinDifference(arr, size);

    return 0;
}
