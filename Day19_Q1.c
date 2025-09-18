#include <stdio.h>

// Function to find GCD using Euclid's algorithm
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a, b, lcmValue;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Calculate LCM
    lcmValue = (a * b) / gcd(a, b);

    printf("LCM of %d and %d is: %d\n", a, b, lcmValue);

    return 0;
}