#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, n = 0;
    double sum = 0.0;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculate sum of digits raised to power n
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    // Check if Armstrong
    if ((int)sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is NOT an Armstrong number.\n", original);
    }

    return 0;
}