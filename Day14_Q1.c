#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for(i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    // Display result
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}