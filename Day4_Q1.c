#include <stdio.h>

int main() {
    int a, b;

    // Input numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without third variable
    a = a + b;  // Step 1: add both
    b = a - b;  // Step 2: subtract new 'a' with 'b' → original 'a'
    a = a - b;  // Step 3: subtract new 'a' with new 'b' → original 'b'

    // After swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}