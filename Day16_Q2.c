#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;  // Store original number

    // Reverse the number
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Check if palindrome
    if (original == reversed) {
        printf("%d is a Palindrome.\n", original);
    } else {
        printf("%d is NOT a Palindrome.\n", original);
    }

    return 0;
}