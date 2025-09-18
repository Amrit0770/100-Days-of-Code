#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i;
    bool isPrime = true;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = false; // 0 and 1 are not prime
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Display result
    if (isPrime) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is NOT a Prime number.\n", num);
    }

    return 0;
}