#include <stdio.h>

int main() {
    int i, j, k;

    // Loop for rows
    for (i = 5; i >= 1; i--) {
        // Print leading spaces
        for (j = 5; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}