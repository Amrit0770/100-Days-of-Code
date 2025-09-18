#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = (float)num1 / num2;  // typecasting for float division
    } else {
        quotient = 0;  // Avoid division by zero
    }

    // Display results
    printf("\nResults:\n");
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (num2 != 0) {
        printf("Quotient = %.2f\n", quotient); // prints 2 decimal places
    } else {
        printf("Quotient = Undefined (division by zero)\n");
    }

    return 0;
}