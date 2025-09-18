#include <stdio.h>
#include <math.h>

int main() {
    int num, original, firstDigit, lastDigit, digits, swappedNum;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Make number positive for calculation
    if (num < 0) {
        num = -num;
    }

    lastDigit = num % 10;

    // Find number of digits - 1
    digits = (int)log10(num);

    firstDigit = num / (int)pow(10, digits);

    // Swap first and last digit
    swappedNum = lastDigit * (int)pow(10, digits) + (num % (int)pow(10, digits)) - lastDigit + firstDigit;

    // Restore negative sign if needed
    if (original < 0) {
        swappedNum = -swappedNum;
    }

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}