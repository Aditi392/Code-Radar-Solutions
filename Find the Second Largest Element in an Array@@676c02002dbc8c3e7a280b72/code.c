#include <stdio.h>
#include <limits.h>  // For INT_MIN

void findSecondLargest(int arr[], int size) {
    int largest = INT_MIN, secondLargest = INT_MIN;

    // Traverse the array
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = arr[i]; // Update largest
        } else  {
            secondLargest = arr[i]; // Update second largest
        }
    }

    // If no second largest found
    if (secondLargest == INT_MIN) {
        printf("\n");
    } else {
        printf("%d\n", secondLargest);
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

    // Call function
    findSecondLargest(arr, size);

    return 0;
}
