#include <stdio.h>

int main() {
    int num, i, isPrime = 1;


    scanf("%d", &num);

    
    if (num <= 1) {
        isPrime = 0;
    } else {
        
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    
  printf("%d",num);

    return 0;
}
