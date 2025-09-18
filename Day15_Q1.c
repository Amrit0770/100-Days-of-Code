#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1; // Use long long for large factorials

    // Input number
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Calculate factorial
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Display result
    printf("Factorial of %d is: %llu\n", n, factorial);

    return 0;
}