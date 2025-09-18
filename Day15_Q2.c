#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;  // Store original number

    // Reverse the number
    while (num != 0) {
        digit = num % 10;          // Get last digit
        reversed = reversed * 10 + digit;  // Append digit
        num /= 10;                 // Remove last digit
    }

    // Display result
    printf("Reversed number of %d is: %d\n", original, reversed);

    return 0;
}