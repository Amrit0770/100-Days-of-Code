#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];

    // Input matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for (int d = 0; d < m + n - 1; d++) {
        int row, col;
        
        // Starting point of each diagonal
        if (d < n) {
            row = 0;
            col = d;
        } else {
            row = d - n + 1;
            col = n - 1;
        }

        // Traverse along current diagonal
        while (row < m && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}