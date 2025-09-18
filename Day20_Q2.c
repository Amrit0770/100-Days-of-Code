#include <stdio.h>
#include <string.h>

int main() {
    char binary[65]; // assuming maximum 64-bit binary number
    int length;

    // Input binary number as string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    length = strlen(binary);

    // Find 1's complement
    printf("1's complement: ");
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else {
            printf("\nInvalid input! Not a binary number.\n");
            return 0;
        }
    }
    printf("\n");

    return 0;
}