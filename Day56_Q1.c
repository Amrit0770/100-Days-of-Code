#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int nextGreater = -1;

        // Check elements to the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;          // nearest greater found
            }
        }

        // Print with comma formatting
        printf("%d", nextGreater);
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}