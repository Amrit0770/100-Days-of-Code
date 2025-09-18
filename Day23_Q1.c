#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate sum of series
    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;    // next even number
        denominator += 4;  // next denominator increases by 4
    }

    // Display result
    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}