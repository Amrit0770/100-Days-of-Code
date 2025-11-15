#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (window size): ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid window size.\n");
        return 0;
    }

    // We'll use a simple array as a queue to store indices of negative numbers
    int q[n];      // q will store indices of negative elements
    int front = 0; // index of queue front
    int rear = 0;  // index just past the last element in queue

    // Process every element, and print answer when the first full window is ready
    for (int i = 0; i < n; i++) {
        // If current element is negative, add its index to the queue
        if (arr[i] < 0) {
            q[rear++] = i;
        }

        // When we have processed k elements (i >= k-1), we can report for the window
        if (i >= k - 1) {
            int windowStart = i - k + 1;

            // Remove indices that are out of the current window (left side)
            while (front < rear && q[front] < windowStart) {
                front++;
            }

            // If queue not empty, front holds index of first negative in current window
            if (front < rear) {
                printf("%d", arr[q[front]]);
            } else {
                // No negative in this window
                printf("0");
            }

            // Print space except after last window (optional)
            if (i != n - 1) printf(" ");
        }
    }

    printf("\n");
    return 0;
}