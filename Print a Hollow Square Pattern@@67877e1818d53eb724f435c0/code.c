#include <stdio.h>

int main() {
    int n, m;

    // Getting input for the size of the rectangle
    printf(" ");
    scanf("%d", &n);

    printf(" ");
    scanf("%d", &m);

    // Loop for rows
    for (int i = 1; i <= n; i++) {
        // Loop for columns
        for (int j = 1; j <= m; j++) {
            // Print '*' for borders (first/last row or first/last column)
            if (i == 1 || i == n || j == 1 || j == m) {
                printf("*");
            } else {
                printf(" ");  // Print space for inner part of the hollow rectangle
            }
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
