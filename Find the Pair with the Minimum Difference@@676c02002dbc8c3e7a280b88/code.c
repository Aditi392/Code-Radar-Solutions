#include <stdio.h>
#include <stdlib.h>

void findMinDifference(int arr[], int size) {
    if (size < 2) {
        printf("\n");
        return;
    }

    int minDiff = abs(arr[1] - arr[0]);
    int num1 = arr[0], num2 = arr[1];

    // Compare every pair
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

    printf("(%d, %d)\n", num1, num2);
    
}

int main() {
    int arr[] = { };
    int size = sizeof(arr) / sizeof(arr[0]);

    
    return 0;
}
