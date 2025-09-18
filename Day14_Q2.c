#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1; // Using long long to handle large numbers

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if there are any even numbers
    if(n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
        return 0;
    }

    // Calculate product of even numbers
    for(i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Display result
    printf("The product of even numbers from 1 to %d is: %llu\n", n, product);

    return 0;
}