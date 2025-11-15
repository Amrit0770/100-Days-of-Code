#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0];      // stores the maximum subarray sum
    int currentSum = arr[0];  // running sum

    for (int i = 1; i < n; i++) {
        // Either add the current element to existing subarray
        // or start a new subarray from current element
        if (currentSum + arr[i] > arr[i]) {
            currentSum = currentSum + arr[i];
        } else {
            currentSum = arr[i];
        }

        // Update maxSum if currentSum becomes larger
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);
    return 0;
}