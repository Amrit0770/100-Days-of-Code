#include <stdio.h>

int main() {
    int a, b, temp;

    // Input numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    // After swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}