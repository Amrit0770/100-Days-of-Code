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
        int prevGreater = -1;

        // Check elements to the LEFT of i
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;         // nearest greater found
            }
        }

        // Print with comma formatting
        printf("%d", prevGreater);
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}