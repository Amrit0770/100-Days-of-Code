#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid k\n");
        return 0;
    }

    // Step 1: Initial window sum
    int windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    int maxSum = windowSum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];  // add next, remove previous
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d\n", maxSum);
    return 0;
}