#include <stdio.h>

int main() {
    int num, original, digit;
    long long product = 1;
    int hasOdd = 0; // Flag to check if there is any odd digit

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Make number positive if negative
    if (num < 0) {
        num = -num;
    }

    // Calculate product of odd digits
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) { // Check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    // Display result
    if (hasOdd) {
        printf("Product of odd digits of %d is: %lld\n", original, product);
    } else {
        printf("No odd digits found in %d.\n", original);
    }

    return 0;
}