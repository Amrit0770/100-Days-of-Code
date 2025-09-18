#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate sum of series
    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;    // next odd number
        denominator += 2;  // next even number
    }

    // Display result
    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}