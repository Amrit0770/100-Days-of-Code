#include <stdio.h>

int main() {
    int num, original, sum = 0, digit;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; // Store original number

    // Make number positive if negative
    if (num < 0) {
        num = -num;
    }

    // Calculate sum of digits
    while (num != 0) {
        digit = num % 10; // Extract last digit
        sum += digit;     // Add to sum
        num /= 10;        // Remove last digit
    }

    // Display result
    printf("Sum of digits of %d is: %d\n", original, sum);

    return 0;
}