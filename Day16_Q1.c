#include <stdio.h>

int main() {
    int num, original;
    int binary[32]; // Array to store binary digits
    int i = 0;

    // Input number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    original = num;

    // Special case for 0
    if (num == 0) {
        printf("Binary of 0 is: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;  // Store remainder
        num = num / 2;        // Reduce number
        i++;
    }

    // Print binary in reverse order
    printf("Binary of %d is: ", original);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}