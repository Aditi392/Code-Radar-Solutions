#include <stdio.h>

// Function to rotate array to the right by one position
void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n
    int temp[k];
    
    // Store last k elements in a temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    // Shift elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    
    // Copy back the k elements to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    
    printf("" );
    scanf("%d", &k);
    
    printf("\n");
    printArray(arr, n);
    
    rotateArray(arr, n, k);
    
    printf("\n");
    printArray(arr, n);
    
    return 0;
}

